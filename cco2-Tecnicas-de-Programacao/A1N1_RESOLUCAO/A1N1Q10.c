#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int mat[4][4] = {1, 2, 3, 4, 5, 0, 7, 8, 9, 10, -11, 12, 13, 14, 15, 16};
	int produto = 1;
	int i, j;
	/* 1   2   3  4
	** 5   0   7  8
	** 9  10 -11 12
	** 13 14  15 16 */
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			// se indice_linha == indice_coluna (elemento da diagonal principal)
			// se o elemento da matriz é diferente de zero
			if (i == j && mat[i][j] != 0) {
				produto *= mat[i][j]; // produto = produto * mat[i][j]
			}
		}
	}
	
	printf("\nO produto dos elementos da diagonal principal é %d", produto);
	return 0;
}
