#include <stdio.h>
#include <stdlib.h>
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void maximoMinimo(int *v, int N, int *maximo, int *minimo) {
	int i;
	*maximo = 0;
	*minimo = 99999;
	
	for (i = 0; i < N; i++) {
		if (*(v + i) > *maximo) {
			*maximo = *(v + i);
		}
		if (*(v + i) < *minimo) {
			*minimo = *(v + i);
		}
	}	
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int tam = 5, v[] = {0, 1, 2, 3, 4};
	int maximo, minimo, i;
	
	printf("\nImprimindo o vetor...\n\n");
	for (i = 0; i < tam; i++) {
		printf("%d\t", v[i]);
	}
	printf("\n");
	
	maximoMinimo(&v, tam, &maximo, &minimo);
	
	printf("\nValor máximo é %d e mínimo é %d\n", maximo, minimo);
	return 0;
}
