#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	float operando, operador;
	char operacao;
	
	printf("Digite dois números: ");
	scanf("%f %f", &operando, &operador);
	fflush(stdin);
	
	printf("\nDigite a operação (+, -, *, /): ");
	scanf("%c", &operacao);
	
//	printf("Digite dois números e operação (número operação número): ")
//	scanf("%f %c %f", &operando, &operacao, &operador);
	
	switch(operacao) {
		case '+':
			printf("\nResultado de %.2f + %.2f = %.2f", operando, operador, operando + operador);
			break;
		case '-':
			printf("\nResultado de %.2f - %.2f = %.2f\n", operando, operador, operando - operador);
			break;
		case '*':
			printf("\nResultado de %.2f * %.2f = %.2f\n", operando, operador, operando * operador);
			break;
		case '/':
			if(operador != 0) {
				printf("Resultado de %.2f / %.2f = %.2f\n", operando, operador, operando / operador);
			} else {
				printf("\nDivisão impossível!\n");
			}
			break;
		default:
			printf("\nOperação digitada é inválida!\n");
	}
	
	system("pause");
	
	return 0;
}
