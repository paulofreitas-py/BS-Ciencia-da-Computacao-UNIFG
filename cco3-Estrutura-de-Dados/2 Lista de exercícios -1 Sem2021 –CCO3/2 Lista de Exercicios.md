//Questão 1
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

void limpatela(){
	system("CLS");
}

int main(){
	setlocale(LC_ALL, "");
	
	int op = 1;
	float salarioInicial, salarioFinal;
	
	while (op != 0){
		printf("Digite o seu salário para descobrir o seu reajuste.\n\n");
		getchar();
		
		printf("Digite aqui o seu valor recebido em seu salário: ");
		scanf("%f",&salarioInicial);
		
		limpatela();
		
		if (salarioInicial <= 500){
			salarioFinal = salarioInicial * 1.5;
			printf("Seu salário recebeu um reajuste de 50 porcento.\n");
			printf("Seu novo salário é de: %.2f\n\n", salarioFinal);
		}else{
			salarioFinal = salarioInicial * 1.3;
			printf("Seu salário recebeu um reajuste de 30 porcento.\n");
			printf("Seu novo salário é de: %.2f\n\n", salarioFinal);
		}
		printf("Digite 0 para sair, ou qualquer outro número para realizar uma nova operação.\n");
		scanf("%d",&op);
		limpatela();
	}
	printf("\n\nOperação finalizada pelo usuário.\n\n");
	getchar();
	
}
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
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
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
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
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
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
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
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
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Questão 06
Letra E: Free
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Questão 07
//Compilador https://www.online-ide.com/TGVB3AEX5Q

#include <stdlib.h>
#include <stdio.h>

struct tipo_complexo {
   float real;
   float imag;
};


struct tipo_complexo *soma_complexo(struct tipo_complexo a, struct tipo_complexo b)
{
  struct tipo_complexo *p;

  p = (struct tipo_complexo*) malloc(sizeof(struct tipo_complexo));

  if (p != NULL) {
      p->real = a.real + b.real;
      p->imag = a.imag + b.imag;
  }

  return p;
}

int main()
{
  struct tipo_complexo alfa = {2.5, 3.6}, beta = {2.9, 8.7}, *p_result;
 
  p_result = soma_complexo(alfa, beta);

  printf("%f %f\n", p_result->real, p_result->imag);
  free(p_result);
  p_result = NULL;

  return (0);
}


----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
