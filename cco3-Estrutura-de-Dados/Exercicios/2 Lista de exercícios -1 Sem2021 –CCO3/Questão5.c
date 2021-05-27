//Questão 5
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

//Função para limpar a tela
void limpatela(){
	system("CLS");
}

//Função menu
int menu(){
	int opc;
	printf("-------------------MENU-------------------\n\n");
	printf("1-Calcular capacidade do reservatório.\n");
	printf("2-Calcular autonomia do reservatório.\n");
	printf("0-Sair\n");
	printf("\nSelecione uma das opções e tecle ENTER: ");
	scanf("%d",&opc);
	fflush(stdin);
	return opc;
}

int main(){
	//Acentuação
	setlocale(LC_ALL, "");
	
	//Variáveis
	float altura, largura, comprimento;
	float area, litros;
	float consumo, autonomia;
	int op;
	
	printf("Programa para calcular capacidade de reservatório, tecle ENTER para iniciar.\n\n");
	getchar();
	
	op = menu();				//Atribui o valor digitado na função menu à variável op
	
	//Executa enquanto a variável op for diferente de 0
	while(op != 0){
		limpatela();				//Chama a função limpatela
		switch(op){
			case 1:
				printf("Informe aqui a altura do reservatório (em centímetros): ");
				scanf("%f",&altura);
				fflush(stdin);
				printf("\nInforme aqui a largura do reservatório (em centímetros): ");
				scanf("%f",&largura);
				fflush(stdin);
				printf("\nInforme aqui o comprimento do reservatório (em centímetros): ");
				scanf("%f",&comprimento);
				fflush(stdin);
				area = altura * largura * comprimento;
				litros = area / 1000;
				limpatela();
				printf("A capacidade desse reservatório é de: %.2f litros",litros);
				break;
			case 2:
				printf("Informe aqui a altura do reservatório (em centímetros): ");
				scanf("%f",&altura);
				fflush(stdin);
				printf("\nInforme aqui a largura do reservatório (em centímetros): ");
				scanf("%f",&largura);
				fflush(stdin);
				printf("\nInforme aqui o comprimento do reservatório (em centímetros): ");
				scanf("%f",&comprimento);
				fflush(stdin);
				area = altura * largura * comprimento;
				litros = area / 1000;
				limpatela();
				printf("A capacidade desse reservatório é de: %.2f litros",litros);	
				printf("\n\n\nInforme o consumo em litros por dia do reservatório: ");
				scanf("%f",&consumo);
				fflush(stdin);
				autonomia = litros / consumo;
				limpatela();
				if (autonomia < 2){
					printf("Consumo elevado.");
				}else if(autonomia < 7){
					printf("Consumo moderado.");
				}else{
					printf("Consumo reduzido.");
				}
				break;
			default:
				printf("A opção digitada é inválida.");
				break;
		}
		printf("\n\nTecle ENTER para continuar\n\n");
		getchar();
		limpatela();
		op = menu();
	}
	limpatela();
	printf("\n\nOperação finalizada pelo usuário.\n\n");
	getchar();
}