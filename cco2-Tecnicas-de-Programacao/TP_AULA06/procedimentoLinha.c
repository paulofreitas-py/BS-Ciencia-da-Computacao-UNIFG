#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// cria a assinatura ou prototipo do procedimento
void linha();

// função principal main()
int main(int argc, char *argv[]) {
	int i;
	// chama o procedimento
	linha();
	puts("Números entre 1 e 5:");
	linha();
	
	for(i = 1; i <= 5; i++) {
		printf("%d\n", i);
	}

	linha();	
	return 0;
}

// implementa o procedimento
void linha() {
	int i;
	// exibe na tela uma linha com 20 asteriscos
	for(i = 1; i <= 20; i++) {
		printf("*");
	}
	printf("\n");
}
