#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int menorValor = 99999;
	int i, j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (mat[i][j] < menorValor) {
				menorValor = mat[i][j];
			}
		}
	}
	
	printf("\nO menor valor da matriz é %d", menorValor);
	
	return 0;
}
