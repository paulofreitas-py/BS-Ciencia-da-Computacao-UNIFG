#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	// declara os vetores para números,
	// números pares (vp) e números impares (vi)
	int numeros[10], vp[10], vi[10];
	// variável de controle para o loop
	int i;
	// variáveis de controle para os vetores vp e vi
	int j = 0, k = 0;
	
	// loop para preencher o vetor números
	for (i = 0; i < 10; i++) {
		printf("Digite número: ");
		scanf("%d", &numeros[i]);
		// limpa o buffer do teclado
		fflush(stdin);
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
	
	// loop para verificar se números são impares ou pares
	for (i = 0; i < 10; i++) {
		// verifica se o numeros[i] é par
		if (numeros[i] % 2 == 0) {
			vp[j] = numeros[i];
			j++;
		} else {
			vi[k] = numeros[i];
			k++;
		}
	}
	
	// loop para imprimir os vetores
	printf("\nImprimindo o vetor de números pares...\n");
	for (i = 0; i < j; i++) {
		printf("%d ", vp[i]);
	}
	printf("\n");
	
	printf("\nImprimindo o vetor de números ímpares...\n");
	for (i = 0; i < k; i++) {
		printf("%d ", vi[i]);
	}
	printf("\n");
	
	return 0;
}
