#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// declara uma constante para determinar o tamanho
#define TAM 20

int main() {
	setlocale(LC_ALL, "");
	// declara uma matriz de strings de TAM linhas
	char nomes[TAM][10];
	// declara um vetor de int para idade das TAM pessoas
	int idades[TAM];
	// declara um vetor de caractere para sexo das TAM pessoas
	char sexos[TAM];
	// declara string que armazena o nome do homem mais velho
	char nomeHomemMaisVelho[10];
	// declara variável para calulcar a média de idade das mulheres
	float mediaIdadeMulheres = 0.0;
	// variável de controle
	int i, idadeHomemMaisVelho = 0, qtdMulheres = 0;
	
	// loop para capturar as informações de TAM pessoas
	// nome, idade e sexo
	for( i = 0; i < TAM; i++) {
		printf("Digite nome: ");
		fgets(nomes[i], 10, stdin);
		printf("Digite idade: ");
		scanf("%d", &idades[i]);
		fflush(stdin);
		printf("Digite o sexo (F - feminino / M - masculino): ");
		scanf("%c", &sexos[i]);
		fflush(stdin);
		
		// verifica a idade do homem mais velho
		if((sexos[i] == 'M' || sexos[i] == 'm') && idadeHomemMaisVelho < idades[i]) {
			idadeHomemMaisVelho = idades[i];
			strcpy(nomeHomemMaisVelho, nomes[i]);
		}
		
		// soma as idades das mulheres para
		// calculo posterior da média de idade
		if((sexos[i] == 'F' || sexos[i] == 'f') ) {
			mediaIdadeMulheres += idades[i];
			// mediaIdadeMulheres = mediaIdadeMulheres + idades[i];
			qtdMulheres++;
		}
	}
	
	// imprime o nome das pessoas
	for(i = 0; i < TAM; i++) {
		printf("\nNome: %s", nomes[i]);
	}
	
	// imprime o nome do homem mais velho
	printf("\nNome do homem mais velho: %s", nomeHomemMaisVelho);
	
	// calcula média de idade das mulheres
	mediaIdadeMulheres /= qtdMulheres;
	printf("\nMédia de idade das mulheres: %.1f\n", mediaIdadeMulheres);	
	
	return 0;
}
