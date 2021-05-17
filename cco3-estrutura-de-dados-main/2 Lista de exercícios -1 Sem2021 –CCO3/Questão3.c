//Questão 3
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

//Função para limpar a tela
void limpatela(){
	system("CLS");
}

int menu(){
	int opc;
	printf("-------------------MENU-------------------\n\n");
	printf("1-Calcular valor de fabricação carro.\n");
	printf("2-Tabela de preços\n");
	printf("0-Sair\n");
	printf("\nSelecione uma das opções e tecle ENTER: ");
	scanf("%d",&opc);
	fflush(stdin);
	return opc;
}

int main(){
	setlocale(LC_ALL, ""); 			// Acentuação
	
	//Variáveis
	int op;
	int adc = 1;
	float precoEntrada, precoFinal;
	
	printf("Programa para calcular o custo de carros, tecle ENTER para iniciar.\n\n");
	getchar();
	
	op = menu();				//Atribui o valor digitado na função menu à variável op
	
	//Executa enquanto a variável op for diferente de 0
	while(op != 0){
		limpatela();				//Chama a função limpatela
		switch(op){
			case 1:
				printf("Digite aqui o custo base de fabricação do carro: ");
				scanf("%f",&precoEntrada);
				fflush(stdin);
				while(adc != 0){
					limpatela();
					printf("O que deseja acrescentar ao carro?\n\n");
					printf("1-Ar condicionado\n");
					printf("2-Pintura metálica\n");
					printf("3-Vidro elétrico\n");
					printf("4-Direção hidráulica\n");
					printf("0-Sair\n");
					printf("Selecione a opção e tecle ENTER: ");
					scanf("%d",&adc);
					switch(adc){
						case 1:
							precoEntrada = precoEntrada + 2450;
							break;
						case 2:
							precoEntrada = precoEntrada + 900;
							break;
						case 3:
							precoEntrada = precoEntrada + 1800;
							break;
						case 4:
							precoEntrada = precoEntrada + 2200;
							break;
						default:
							printf("Opção inválida.\n");
							getchar();
					}
					precoFinal = precoEntrada;
				}
				printf("\nCom as adições, o custo final da fabricação é: R$ %.2f",precoFinal);
				break;
			case 2:
				printf("-------------------Valores da fabricação-------------------\n");
				printf("1-Ar condicionado: R$ 2450,00\n");
				printf("2-Pintura metálica: R$ 900,00\n");
				printf("3-Vidro elétrico: R$ 1800,00\n");
				printf("4-Direção hidráulica: R$ 2200,00\n");
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