#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x = 12;
	int *p = NULL; // ponteiro para int
	int **ptr = NULL; // ponteiro para ponteiro do tipo int
	// p recebe o endereço de memória de x
	p = &x;
	// ptr recebe o endereço de memória de p
	ptr = &p;
	
	printf("O endereco de x e %x\n", &x);
	printf("x contem o valor %d\n", x);
	printf("p contem o endereco %x\n", p);
	printf("O endereco de p e %x\n", &p);
	printf("p aponta para o valor %d\n", *p);
	printf("ptr contem o endereco %x\n", ptr);
	printf("ptr aponta para o valor %d\n", **ptr);
	return 0;
}
