#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct usuario{
	char login[10];
	char senha[10];
};

void menu(int *x){
	system("cls");
	printf("CASDATRO DE USUARIOS\n\n");
	printf("MENU\n\n");
	printf("1- CADASTRO DE LOGIN\n");
	printf("2- CONSULTAR LOGIN\n");
	printf("3- LISTAR\n");
	printf("4- EXLCUIR LOGIN\n");
	printf("0- SAIR\n\n");
	printf("ESCOLHA OPCAO: ");
	scanf("%d",&*x);
	system("cls");
}
void cadastrar(struct usuario vetor[50],struct usuario preenchido,int posicao){
	strcpy(vetor[posicao].login,preenchido.login);
	strcpy(vetor[posicao].senha,preenchido.senha);
}
int consultar(struct usuario vetor[50], char user[10], int *tamanho, int posicao){
	int i;
	for(i=0;i<posicao;i++){
		if((strcmp(vetor[i].login,user))==0){
			*tamanho=i;
			return 1;
		}else{
			return 0;
		}
	}
}

int excluir(struct usuario vetor[50], char usuario[10], int posicao){
	int poscln,i;
	char res;
	if(consultar(vetor,usuario,&poscln,posicao)){
		printf("DESEJA EXCLUIR %s DA LISTA DE USUARIOS (S- SIM N- NAO)? ",vetor[poscln].login);
			scanf("%s",&res);
			if(res=='S' || res=='s'){
				for(i=poscln;i<posicao;i++){
					strcpy(vetor[i].login,vetor[i+1].login);
					strcpy(vetor[i].senha,vetor[i+1].senha);
				}
				return 1;
			}else{
				printf("CANCELADA EXCLUSAO!\n\n");
				return 0;
			}
	}else{
		printf("LOGIN NAO ENCONTRADO!\n\n");
		return 0;
	}
}

void gerar(struct usuario vetor[50], int tamanho, FILE *arquivo){
	int i;
	for(i=0;i<tamanho;i++){
		fwrite(&vetor[i].login,sizeof(vetor[i].login),1,arquivo);
		fwrite(&vetor[i].senha,sizeof(vetor[i].senha),1,arquivo);
	}
}

void listar(struct usuario vetor[50], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("LOGIN: %s\n",vetor[i].login);
		printf("SENHA: %s\n\n",vetor[i].senha);
	}
}

int main(){
	struct usuario vetor[50];
	struct usuario preenchido;
	char login[10];
	int opcao;
	int index=0;
	int ind;
	FILE *arq;
	if((arq=fopen("usuarios.dat","r+b"))==NULL){
		printf("ERRO AO ABRIR O ARQUIVO 'usuarios.dat'\n\n");
		system("pause");
		return 0;
	}
	while(!feof(arq)){
		fread(&vetor[index].login,sizeof(vetor[index].login),1,arq);
		if(!feof(arq)){
			fread(&vetor[index].senha,sizeof(vetor[index].senha),1,arq);
			index++;
		}
	}
	fclose(arq);
	menu(&opcao);
	while(opcao!=0){
		switch(opcao){
			case 1:
				printf("CADASTRAMENTO DE LOGIN\n\n");
				printf("LOGIN: ");
				strcpy(preenchido.login,"");
				while((strlen(preenchido.login))==0)
					gets(preenchido.login);
				printf("SENHA: ");
				strcpy(preenchido.senha,"");
				while((strlen(preenchido.senha))==0)
					gets(preenchido.senha);
				cadastrar(vetor,preenchido,index);
				index++;
				system("pause");
				break;
			case 2:
				printf("CADASTRO DE USUARIOS\n\n");
				printf("\tCONSULTA\n\n");
				printf("\tNOME: ");
				strcpy(login,"");
				while((strlen(login))==0)
					gets(login);
				if(consultar(vetor,login,&ind,index)==1){
					printf("USUARIO LOCALIZADO!\n\n");
					printf("LOGIN: %s\n",vetor[ind].login);
					printf("SENHA: %s\n",vetor[ind].senha);
				}else
					printf("LOGIN NAO LOCALIZADO!\n\n");
				printf("%d\n",ind);
				system("pause");
				break;
			case 3:
				printf("LISTAGEM DE USUARIOS\n\n");
				if(index==0)
					printf("NAO AH USUARIOS CADASTRADOS!\n\n");
				else
					listar(vetor,index);
				system("pause");
				break;
			case 4:
				printf("EXCLUSAO DE USUARIOS\n\n");
				printf("\tEXCLUIR\n\n");
				printf("\tLOGIN: ");
				strcpy(login,"");
				while((strlen(login))==0)
					gets(login);
				if(excluir(vetor,login,index)==1)
					 index--;
				system("pause");
				break;
			default:
				printf("OPCAO NAO VALIDA!\n\n");
		}
		menu(&opcao);
	}
	if((arq=fopen("usuarios.dat","w+b"))==NULL){
		printf("ERRO AO ABRIR ARQUIVO usuarios.dat\n\n");
		system("pause");
		return 0;
	}
	gerar(vetor,index,arq);
	system("pause");
	return 0;
}


