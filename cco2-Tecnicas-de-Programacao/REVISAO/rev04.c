#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	// declara um vetor de caracteres de tamanho 20
	char letras[20];
	// declara uma variável de controle i
	// declara uma variável que armaneza
	// a quantidade de vogais do vetor qtdVogais
	int i, qtdVogais = 0;
	// declara uma variável que armaneza
	// o percentual de consoantes do vetor perConsoantes
	float perConsoantes;
	
	// loop para completar o vetor letras
	for (i = 0; i < 20; i++) {
		printf("Digite uma letra: ");
		scanf("%c", &letras[i]);
		fflush(stdin);
	}
	
	// loop para contabilizar as vogais
	for (i = 0; i < 20; i++) {
		// verifica se a letra[i] é uma vogal
		if(letras[i] == 'a' || letras[i] == 'e' || letras[i] == 'i' ||
			letras[i] == 'o' || letras[i] == 'u'|| letras[i] == 'A' ||
			letras[i] == 'E' || letras[i] == 'I' || letras[i] == 'O' ||
			letras[i] == 'U') {
				qtdVogais++;
			}
	}
	
	// imprime a quantidade de vogais do vetor
	printf("\nQuantidade de vogais: %d", qtdVogais);
	
	// calcula o percentual de consoantes
	perConsoantes = ((20 - qtdVogais * 1.0) / 20) * 100;
	// imprime o percentual de consoantes do vetor
	printf("\nPercentual de consoantes: %.1f%%", perConsoantes);
	
	return 0;
}
