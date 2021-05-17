//Questão 4
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void limpatela(){
	system("CLS");
}

void pausa(){
	printf("\n\n\n");
	system("pause");
}

void info(){
	printf("Preço da lata de tinta: R$20,00\n\n");
	printf("Quantidade da lata de tinta: 5 litros\n\n");
	printf("Máximo que pode pintar: 3 metros quadrados\n\n");
}

void gasto(){
	//variáveis
	float h,r,a,qtd,preco;
	printf("Digite aqui o raio do cilindro que deseja pintar (em metros): ");
	scanf("%f",&r);
	fflush(stdin);
	printf("Digite aqui a altura do cilindro que deseja pintar(em metros): ");
	scanf("%f",&h);
	fflush(stdin);
	a=(3.14*(r*r))+(2*3.14*r*h);
	printf("\n\nA área que você deseja pintar é de: %.2f",a);
	qtd=a/3;
	printf("\n\nVocê precisará de %.0f latas de tinta.",ceil(qtd));
	preco=ceil(qtd)*20;
	printf("\n\nO custo dessas latas de tinta será de %.0f.",preco);
}

void menu(){
	int op, x;
	printf("Selecione uma das opções abaixo:\n\n");
	printf("1-Consultar informações\n");
	printf("2-Calcular o gasto\n");
	scanf("%d",&op);
	fflush(stdin);
	switch(op){
		case 1:
			limpatela();
			info();
			printf("\n\nDigite 1 para voltar ao menu: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				pausa();
			}
			break;
		case 2:
			limpatela();
			gasto();
			printf("\n\nDigite 1 para voltar ao menu: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				pausa();
			}
			break;
	}
}

int main(){
	
	//acentuação
	setlocale(LC_ALL, "");
	
	menu();
}