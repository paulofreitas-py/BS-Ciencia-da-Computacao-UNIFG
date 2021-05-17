#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int mat[2][3] = {1, 2, 3, 4, 5, 6};
	int i, j, soma = 0;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			soma += mat[i][j];  // soma = soma + mat[i][j];
		}
	}
	
	printf("A soma de todos os elementos da matriz é %d", soma);
	
	return 0;
}
