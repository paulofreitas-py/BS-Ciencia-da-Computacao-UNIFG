#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// recebe por referência um vetor de inteiros
// e a quantidade de elementos no vetor
int soma(int *a, int num_elementos);

int main(int argc, char *argv[]) {
	// declara o vetor pedidos de 5 elementos
	// lembrando que pedidos é o endereço inicial do vetor
	int pedidos[5] = {100, 220, 37, 16, 98};
	
	printf("O total de pedidos e %d\n", soma(pedidos, 5));
		
	return 0;
}

// recebe por referência um vetor de inteiros
// e a quantidade de elementos no vetor
int soma(int *a, int num_elementos) {
	int total = 0;
	int k;
	
	// percorre o vetor para somar os elementos
	for (k = 0; k < num_elementos; k++) {
		total += a[k]; // total = total + a[k];
	}
	
	return total;
}
