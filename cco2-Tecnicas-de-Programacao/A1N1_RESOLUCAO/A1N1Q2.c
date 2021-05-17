#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void fazAlgo(int v[]) {
	int i, aux, trocou;
	int tam = MAX;
	do {
		tam--;
		trocou = 0;
		for (i = 0; i < tam; i++) {
			aux = v[i];
			v[i] = v[i +1];
			trocou = 1;
		}
	} while(trocou);
}

int main(int argc, char *argv[]) {
	int vetor[MAX];
	vetor[0] = 5; vetor[1] = 22; vetor[2] = 2;  vetor[3] = 10;
	fazAlgo(vetor);
	for(int i = 0; i < MAX; i++) {
		printf("%d\n", vetor[i]);
	}
	
	return 0;
}
