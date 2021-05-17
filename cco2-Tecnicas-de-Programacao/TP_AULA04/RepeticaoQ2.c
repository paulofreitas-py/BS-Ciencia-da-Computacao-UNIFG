#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	int num, i, somaImpares = 0;
	// laço de reptição para digitar cinco números
	for(i = 0; i < 5; i++) {
		printf("Digite um número: ");
		scanf("%d", &num);
		// verifica se num é impar
		if(num % 2 != 0) {
			somaImpares += num; // somaImpares = somaImpares + num;
		}
	}
	// imprime a soma dos números impares digitados
	printf("\nSoma dos números ímpares é igual a %d", somaImpares);
	
	return 0;
}
