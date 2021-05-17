/*--------UNIFG--------
Estrutura de dados - N1
CCO
3 Período
Grupo: Cristian Matheus Galindo de Brito (202002728)
       Paulo Emanuel Madeira de Freitas (202003566)
       Paulo Montenegro Campos (202000095)

Questão 2: 
Os alunos de Engenharia Elétrica da UNIFG foram contratados por uma empresa X que fornece energia elétrica para uma cidade Y do estado de Pernambuco.
A empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. Para cada consumidor, são digitados os seguintes dados:
• número do consumidor;
• quantidade de kWh consumidos durante o mês;
• tipo (código) do consumidor:
1- residencial, preço em reais por kWh = 0,1
2- comercial, preço em reais por kWh = 0,4
3- industrial, preço em reais por kWh = 0,8

Os dados devem ser lidos até que seja encontrado o consumidor com número 0 (zero). Faça um programa que calcule e imprima:
a) O custo total para cada consumidor;
b) O total de consumo para os três tipos de consumidor;
c) A média de consumo dos tipos 1 e 2;
d) média do consumo dos tipos 1 e 3 ;
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

//função para limpar a tela
void limpatela(){
	system("CLS");
}

//função principal
int main(){
	//acentuação
	setlocale(LC_ALL, "");
	
	//variáveis
	int op = 1;
	int codConsumidor;
	float consumo, preco;
	float consumo1, consumo2, consumo3, preco1, preco2, preco3;
	float totalConsumo;
	float media1, media2;
	
	printf("Programa para calcular consumo de energia na cidade Y, pressione ENTER para continuar.\n\n");
	getch();
	limpatela();							//Chama a função limpatela
	
	while (op != 0){						//Executa enquanto a variável op for diferente de 0
		printf("----------------------------MENU----------------------------\n\n");
		printf("1-Conferir custos por tipos de consumidor\n");
		printf("2-Simular consumo\n");
		printf("3-Calcular consumo real\n");
		printf("0-Sair\n\n");
		scanf("%d",&op);
		fflush(stdin);
		limpatela();						//Chama a função limpatela
		switch(op){							//Executa de acordo com o valor atribuído a numConsumidor
			case 1:
				printf("Tipos de consumidor, e seus respectivos custos:\n");
				printf("1-Residencial \t Custo do kw/h: R$ 0,10\n");
				printf("2-Comercial \t Custo do kw/h: R$ 0,40\n");
				printf("3-Industrial \t Custo do kw/h: R$ 0,80\n");
				printf("\nPressione qualquer tecla para continuar.\n");
				getch();
				break;
			case 2:
				printf("Simulação de valores:\n");
				printf("1-Consumo residencial\n");
				printf("Digite a quantidade de kw/h consumidas: ");
				scanf("%f",&consumo1);
				fflush(stdin);
				preco1 = consumo1 * 0.1;
				printf("Preço total: R$ %.2f",preco1);
				printf("\n\n\n2-Consumo comercial\n");
				printf("Digite aqui a quantidade de kw/h consumidas: ");
				scanf("%f",&consumo2);
				fflush(stdin);
				preco2 = consumo2 * 0.4;
				printf("Preço total: R$ %.2f",preco2);
				printf("\n\n\n3-Consumo industrial\n");
				printf("Digite aqui a quantidade de kw/h consumidas: ");
				scanf("%f",&consumo3);
				fflush(stdin);
				preco3 = consumo3 * 0.8;
				printf("Preço total: R$ %.2f",preco3);
				printf("\n\nPressione qualquer tecla para continuar.");
				getch();
				limpatela();				//Chama a função limpatela
				totalConsumo = consumo1 + consumo2 + consumo3;
				printf("Total de consumo da simulação em kw/h: %.2f",totalConsumo);
				media1 = (consumo1 + consumo2) / 2;
				printf("\n\nMédia dos consumos de tipo 1 e 2: %.2f",media1);
				media2 = (consumo1 + consumo3) / 2;
				printf("\n\nMédia dos consumos de tipo 1 e 3: %.2f",media2);
				printf("\n\nPressione qualquer tecla para continuar.");
				getch();
				break;
			case 3:
				printf("Códigos do consumidor:\n");
				printf("1-Residencial\n");
				printf("2-Comercial\n");
				printf("3-Industrial\n");
				printf("Digite o código e tecle ENTER para calcular: ");
				scanf("%d",&codConsumidor);
				fflush(stdin);
				limpatela();				//Chama a função limpatela
				switch(codConsumidor){
					case 1:
						printf("Consumidor Residencial.\n");
						printf("Digite a quantidade de kw/h consumida: ");
						scanf("%f",&consumo);
						preco = consumo * 0.1;
						printf("\nO preço a ser pago pelo consumidor é: R$ %.2f",preco);
						printf("\n\nPressione qualquer tecla para continuar.");
						getch();
						break;
					case 2:
						printf("Consumidor Comercial.\n");
						printf("Digite a quantidade de kw/h consumida: ");
						scanf("%f",&consumo);
						preco = consumo * 0.4;
						printf("\nO preço a ser pago pelo consumidor é: R$ %.2f",preco);
						printf("\n\nPressione qualquer tecla para continuar.");
						getch();
						break;
					case 3:
						printf("Consumidor Industrial.\n");
						printf("Digite a quantidade de kw/h consumida: ");
						scanf("%f",&consumo);
						preco = consumo * 0.8;
						printf("\nO preço a ser pago pelo consumidor é: R$ %.2f",preco);
						printf("\n\nPressione qualquer tecla para continuar.");
						getch();
						break;
					default:
						printf("Código digitado inválido.");
						printf("\n\nPressione qualquer tecla para continuar.");
						getch();
						break;
				}
				break;
			case 0:
				printf("");
				break;
			default:
				printf("Opção digitada inválida.");
				printf("\n\nPressione qualquer tecla para continuar.");
				getch();
		}
		limpatela();					//Chama a função limpatela
	}
	limpatela();						//Chama a função limpatela
	printf("\n\nOperação finalizada pelo usuário.\n");
	printf("\n\nPressione qualquer tecla para continuar.");
	getch();
}
