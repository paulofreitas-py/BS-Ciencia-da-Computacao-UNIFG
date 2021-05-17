#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mat[4][4] = {1, 2, 3, 4, 5, 0, 7, 8, 9, 10, -11, 12, 13, 14, 15, 16};
	int soma = 0;
	int i, j;
	/* 1   2   3  4
	** 5   0   7  8
	** 9  10 -11 12
	** 13 14  15 16 */
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			// se indice_linha > indice_coluna (elementos abaixo da diagonal principal)
			if (i > j) {
				soma += mat[i][j]; // soma = soma + mat[i][j]
			}
		}
	}
	
	printf("\nO Soma dos elementos da abaixo da diagonal é %d", soma);
	return 0;
}
