#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	// declara um vetor de 20 posições
	float tomadas[20];
	// declara as variáveis para armazenar
	// o pior (maior) tempo, melhor (menor) tempo,
	// e a média de tempo
	float pior = 0.0, melhor = 9999.9, media = 0.0;
	int i;
	
	// loop para armazenar as 20 tomadas de tempo
	for(i = 0; i < 20; i++) {
		printf("Digite o tempo da tomada #%d: ", i);
		scanf("%f", &tomadas[i]);
		// limpa o buffer do teclado
		fflush(stdin);
		// verifica o menor tempo (melhor)
		if(tomadas[i] < melhor) {
			melhor = tomadas[i];
		}
		// verifica o maior tempo (pior)
		if(tomadas[i] > pior) {
			pior = tomadas[i];
		}
	}
	// loop para realizar a soma das tomadas
	// e armazenar em media
	for(i = 0; i < 20; i++) {
		media += tomadas[i];
	}
	
	// calcula a média das 20 tomadas
	// media = media / 20
	media /= 20;
	
	// imprime os resultados
	printf("\nMédia de tempo: %.1f", media);
	printf("\nPior tempo: %.1f", pior);
	printf("\nMelhor tempo: %.1f\n", melhor);
	
	
	return 0;
}
