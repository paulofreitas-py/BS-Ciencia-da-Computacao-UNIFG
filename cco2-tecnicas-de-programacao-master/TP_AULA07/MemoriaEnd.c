#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// cabeçalho da função teste
// que recebe como parametro um inteiro (passagem por valor)
void teste(int k);

int main() {
	int i = 0;
	printf("O endereco de i e %x\n", &i);
	teste(i);
	printf("O endereco de i e %x\n", &i);
	teste(i);
	return 0;
}

void teste(int k) {
	printf("O endereco de k e %x\n", &k);
}
