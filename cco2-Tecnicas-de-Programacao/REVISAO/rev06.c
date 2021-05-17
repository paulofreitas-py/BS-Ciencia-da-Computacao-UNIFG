#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// implementação do procedimento tabuada
// que recebe um inteiro como parametro
void tabuada(int n) {
	int i;
	for (i = 0; i < 10; i++) {
		printf("\n%d * %d = %d", i, n, i * n);
	}
}

// função principal main()
int main() {
	setlocale(LC_ALL, "");
	// declara a variável num
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	// faz chamada para o procedimento tabuada(num)
	tabuada(num);
	
	return 0;
}
