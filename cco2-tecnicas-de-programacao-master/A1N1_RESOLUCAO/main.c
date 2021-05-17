#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int mat[3][3] = {25, 10, 43, 18, 2, 30, 37, 40, 23};
	int n, trocou; 
	int n_esimo = 99999; // n-ésimo menor valor
	int i, j;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	trocou = n - 1;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (mat[i][j] < n_esimo && trocou > 0) {
				n_esimo = mat[i][j];
				trocou--;
			}
		}
	}
	
	printf("\nO %d-esimo menor valor da matriz eh %d", n, n_esimo);
	
	return 0;
}
