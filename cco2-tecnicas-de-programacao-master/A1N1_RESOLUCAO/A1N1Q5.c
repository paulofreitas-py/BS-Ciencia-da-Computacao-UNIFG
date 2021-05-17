#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int mat[3][4] = {1, 2, -3, 4, 5, 6, 7, -8, 9, -10, 11, 12};
	int i, j;
	
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			printf("Digite um numero:");
//			scanf("%d", &mat[i][j]);
//		}
//	}
	
	// imprime a matriz original
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	// imprimindo a matriz modificada
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			// caso mat[i][j] for negativo troca o valor
			// por zero
			if (mat[i][j] < 0) {
				mat[i][j] = 0;
			}
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
	
}
