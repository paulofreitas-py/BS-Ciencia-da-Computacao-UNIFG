#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX 4

void fazAlgo (int v[]) {
	int i, aux, trocou;
	int tam = MAX;
	do {
		tam--;
		trocou = 0;
		for (i = 0; i < tam; i++)
			if(v[i] > v[i + 1]) {
				aux = v[i];
				v[i] = v[i+1];
				v[i + 1] = aux;
				trocou = 1;
			}
	} while (trocou);
}

int main() {
	int vetor[MAX];
	vetor[0] = 5; vetor[1] = 22; vetor[2] = 2; vetor[3] = 10;
	fazAlgo(vetor);
	for (int i = 0; i < MAX; i++) {
		printf("%d\n", vetor[i]);
	}
	return 0;
}
