#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	int num, somaPar = 0, contadorPar = 0;
	float media;
	
	// media = soma_dos_pares / quantidade_numeros_pares
	
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &num);
	
	printf("\nValores das variáveis antes do while...\n");
	printf("Número digitado: %d, somaPar: %d, contadorPar: %d", num, somaPar, contadorPar);
	
	while(num != 0) {
		// verifica se num é par
		if(num % 2 == 0) {
			somaPar = somaPar + num;
			contadorPar++; // contadorPar = contadorPar + 1
		}
		
		printf("\nValores das variáveis dentro do while...\n");
		printf("Número digitado: %d, somaPar: %d, contadorPar: %d", num, somaPar, contadorPar);
		
		printf("Digite um número inteiro positivo: ");
		scanf("%d", &num);
	}
	
	media = (float) somaPar / contadorPar;
	
	printf("Média dos números pares digitados é igual %.2f", media);	
	
	return 0;
}
