//Questão 2
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
	printf("101-Gerente\n");
	printf("102-Engenheiro\n");
	printf("103-Técnico\n");
	printf("0-Sair\n");
	printf("\nSelecione uma das opções e tecle ENTER: ");
	scanf("%d",&opc);
	fflush(stdin);
	return opc;
}

int main(){
	setlocale(LC_ALL, ""); 			// Acentuação
	
	//Variáveis
	int cod;
	float salarioInicial, salarioFinal, diferencaSalario;
	
	printf("Programa de cálculo de reajuste salarial, pressione ENTER para continuar.\n\n");
	getchar();
	
	cod = menu();				//Atribui o valor digitado na função menu à variável cod
	
	while (cod != 0){
		limpatela();				//Chama a função limpatela
		switch(cod){
			case 101:
				printf("Você selecionou a opção Gerente.\n");
				printf("Digite aqui o seu salário atual: ");
				scanf("%f",&salarioInicial);
				fflush(stdin);
				limpatela();
				salarioFinal = salarioInicial * 1.1;
				diferencaSalario = salarioFinal - salarioInicial;
				printf("O seu novo salário é de R$ %.2f\n",salarioFinal);
				printf("Um aumento de R$ %.2f\n",diferencaSalario);
				break;
			case 102:
				printf("Você selecionou a opção Engenheiro.\n");
				printf("Digite aqui o seu salário atual: ");
				scanf("%f",&salarioInicial);
				fflush(stdin);
				limpatela();
				salarioFinal = salarioInicial * 1.2;
				diferencaSalario = salarioFinal - salarioInicial;
				printf("O seu novo salário é de R$ %.2f\n",salarioFinal);
				printf("Um aumento de R$ %.2f\n",diferencaSalario);
				break;
			case 103:
				printf("Você selecionou a opção Técnico.\n");
				printf("Digite aqui o seu salário atual: ");
				scanf("%f",&salarioInicial);
				fflush(stdin);
				limpatela();
				salarioFinal = salarioInicial * 1.3;
				diferencaSalario = salarioFinal - salarioInicial;
				printf("O seu novo salário é de R$ %.2f\n",salarioFinal);
				printf("Um aumento de R$ %.2f\n",diferencaSalario);
				break;
			default:
				printf("O código digitado é inválido.\n");
				break;
		}
		printf("\n\nTecle ENTER para continuar\n\n");
		getchar();
		limpatela();
		cod = menu();
	}
	limpatela();
	printf("\n\nOperação finalizada pelo usuário.\n\n");
	getchar();
}