#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j = 63;
	int* p = NULL; // ponteiro aponta para o tipo inteiro
	p = &j; // p recebe o endereço de memória de j
	
	printf("O endereco de j e %x\n", &j);
	printf("p contem o endereco %x\n", p); // & e * juntos são cancelados
	printf("O valor de j e %d\n", j);
	printf("p esta apontando para o valor %d\n", *p);
	printf("O endereco de p e %x\n", &p);
	return 0;
}
