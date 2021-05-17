#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHA 3
#define COLUNA 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	int matriz[LINHA][COLUNA];
	int num, i, j, somaNumerosMaiores = 0;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	fflush(stdin);
	
	// loop para preencher a matriz de inteiro
	for(i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++) {
			printf("Digite um número inteiro para matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			fflush(stdin);
			// verifica se o número é maior que o primeiro número digitado:
			if( matriz[i][j] > num) {
				somaNumerosMaiores += matriz[i][j];
				// somaNumerosMaiores = somaNumerosMaiores + matriz[i][j]
			}
		}
	}
	
	// loop para exibir a matriz digitada
	for(i = 0; i < LINHA; i++) {
		for(j = 0; j < COLUNA; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	// imprime a soma dos números maiores que numero digitado
	printf("Soma dos números maiores que %d é igual a %d", num, somaNumerosMaiores);
	
	return 0;
}
