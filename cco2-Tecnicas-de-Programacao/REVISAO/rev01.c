#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	// declara um vetor de inteiro de 10 posições
	int numeros[10];
	int maior = -99999, menor = 99999;
	int i;
	
	// loop/laço para preencher o vetor numeros
	for (i = 0; i < 10; i++) {
		printf("Digite número: ");
		scanf("%d", &numeros[i]);
		// limpa o buffer do teclado
		fflush(stdin);
	}
	
	// loop para verificar o maior e menor número
	for (i = 0; i < 10; i++) {
		// verifica o maior número
		if(numeros[i] > maior) {
			maior = numeros[i];
		}
		// verifica o menor número
		if(numeros[i] < menor) {
			menor = numeros[i];
		}
		
	}
	
	
	// imprime o maior e menor número
	printf("\nMaior número é %d", maior);
	printf("\nMenor número é %d\n", menor);
	return 0;
}
