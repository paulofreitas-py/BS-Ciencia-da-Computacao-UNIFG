#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	int num, i, numMaior = -9999999, numMenor = 9999999;
	
	for(i = 0; i < 20; i++){
		printf("Digite um número: ");
		scanf("%d", &num);
		
		// verifica se o número é menor
		if(num < numMenor) {
			numMenor = num;
		}
		// verifica se o número é maior
		if(num > numMaior) {
			numMaior = num;
		}
	}
	
	// Imprime o maior número
	printf("O maior número é %d", numMaior);
	// Imprime o menor número
	printf("O menor número é %d", numMenor);
	return 0;
}
