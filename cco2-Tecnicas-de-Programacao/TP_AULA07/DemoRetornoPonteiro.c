#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// função retorna um vetor de números pares
int* get_pares();

int main() {
	int *a; // ponteiro para inteiro
	int k;
	
	a = get_pares(); // obtem os cinco primeiros numeros pares
	// imprime o vetor a
	for (k = 0; k < 5; k++) {
		printf("%d\n", a[k]);
	}
	
	return 0;
}

int* get_pares() {
	static int numeros[5];
	int k;
	int par = 0;
	
	for(k = 0; k < 5; k++) {
		par += 2; //par = par + 2;
		numeros[k] = par;
	}
	
	return (numeros);
}
