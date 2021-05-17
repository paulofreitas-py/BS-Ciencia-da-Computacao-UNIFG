#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int mat[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i, j;
	
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("Digite numero: ");
//			scanf("%d", &mat[i][j]);
//		}
//	}
	
	
	// imprime a matriz preenchida
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	// imprime a matriz na ordem inversa
	for (i = 1; i >= 0; i--) {
		for (j = 4; j >= 0; j--) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
