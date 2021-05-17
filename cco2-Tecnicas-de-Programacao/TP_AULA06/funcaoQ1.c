#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu() {
	system("cls");
	printf("\n*** MENU DE OPÇÕES ***\n\n");
	printf("1. Adição\n");
	printf("2. Subtração\n");
	printf("3. Multiplicação\n");
	printf("4. Divisão\n");
	printf("0. Sair\n");
	printf("\nDigite opção: ");
}

float somar(float a, float b) {
	float resultado;
	resultado = a + b;
	return resultado;
}

float subtrair(float a, float b) {
	float resultado;
	resultado = a - b;
	return resultado;
}

float multiplicar(float a, float b) {
	float resultado;
	resultado = a * b;
	return resultado;
}

float dividir(float a, float b) {
	float resultado;
	resultado = a / b;
	return resultado;
}

void pausar() {
	printf("Digite qualquer tecla para continuar");
	getchar();
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int operacao;
	float n1, n2;
	
	// chama o procedimento para exibir o menu
	menu();
	// leia a operação digitada
	scanf("%d", &operacao);
	
	// repita até o usuário digitar '0'
	while(operacao != 0) {
				
		printf("\nDigite dois números: ");
		// leia os dois números reais para a operação
		scanf("%f %f", &n1, &n2);
		// limpa o buffer do teclado
		fflush(stdin);
		
		switch(operacao) {
			// realiza a soma
			case 1:
				printf("\n%.1f + %.1f = %.1f\n", n1, n2, somar(n1, n2));
				//system("pause");
				pausar();
				break;
			// realiza a subtração
			case 2:
				printf("\n%.1f - %.1f = %.1f\n", n1, n2, subtrair(n1, n2));
				pausar();
				break;
			// realiza a multiplicação
			case 3:
				printf("\n%.1f * %.1f = %.1f\n", n1, n2, multiplicar(n1, n2));
				pausar();
				break;
			// realiza a divisão
			case 4:
				// verifica a divisão por zero
				if(n1 != 0) {
					printf("\n%.1f / %.1f = %.1f\n", n1, n2, dividir(n1, n2));
				} else {
					printf("\nDivisão de zero impossível!\n");
				}
				pausar();
				break;
			// caso o usuário tenha digitado uma operação inválida
			default:
				printf("\nOperação digitada inválida!\n");
				
		}
		
		// chama o procedimento para exibir o menur
		menu();
		// leia a operação digitada
		scanf("%d", &operacao);		
	}
	
	return 0;
}

