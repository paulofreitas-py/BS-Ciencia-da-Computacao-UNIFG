#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	// declara uma matriz de strings 
	// para guardar 5 nomes de tamanho 10 cada
	char nomes[5][10];
	// declara uma matriz de reais
	// para guardar duas notas dos cinco alunos (matriz 5 x 2)
	float notas[5][2];
	// declara as variáveis de controle para os loops
	int i;
	
	// loop para armanezar o nome do aluno e
	// suas duas notas
	for(i = 0; i < 5; i++) {
		printf("Digite nome: ");
		// armazena o nome em nomes
		fgets(nomes[i], 10, stdin);
		
		printf("Digite as duas notas: ");
		// armazena as duas notas
		scanf("%f %f", &notas[i][0], &notas[i][1]);
		// limpa o buffer do teclado
		fflush(stdin);
	}
	
	// loop para imprimir o nome do aluno,
	// suas duas notas e a média de notas
	for(i = 0; i < 5; i++) {
		printf("\nNome: %s", nomes[i]);
		printf("\nNotas: %.1f %.1f", notas[i][0], notas[i][1]);
		printf("\nMédia: %.1f\n", (notas[i][0] + notas[i][1]) / 2);
	}
	
	return 0;
}
