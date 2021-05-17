#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	int matrizA[3][5], matrizB[3][5], matrizC[3][5];
	// variáveis de controle para linha e coluna das matrizes
	int i, j;
	
	// preenchendo a matriz A
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 5; j++) {
			printf("Digite número para a posição A[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matrizA[i][j]);
			fflush(stdin);
		}
	}
	
	// preenchendo a matriz B
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 5; j++) {
			printf("Digite número para a posição B[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matrizB[i][j]);
			fflush(stdin);
		}
	}
	
	// realizando a soma entre as matrizes A e B
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 5; j++) {
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
	
	// imprime o resultado da soma
	printf("\nResultado da soma:\n\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 5; j++) {
			printf("%d\t", matrizC[i][j]);
		}
		printf("\n");
	}
	return 0;
}
