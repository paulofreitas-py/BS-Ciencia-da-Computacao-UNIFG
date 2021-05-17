#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	float mediaAluno[10], n1, n2;
	int i;
	 // calculando a média de cada aluno e salvando no vetor
	for(i = 0; i < 10; i++) {
		printf("Digite as dois notas do aluno #%d: ", i + 1);
		scanf("%f %f", &n1, &n2);
		// limpando o buffer do teclado
		fflush(stdin);
		// calculando a média
		mediaAluno[i] = (n1 + n2) / 2;
	}
	
	// imprimindo a média de cada aluno
	for(i = 0; i < 10; i++) {
		printf("\nMédia aluno #%d é de %.1f", i + 1, mediaAluno[i]);
	}
	
	return 0;
}
