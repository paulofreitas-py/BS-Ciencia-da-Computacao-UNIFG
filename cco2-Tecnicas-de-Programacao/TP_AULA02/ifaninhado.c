#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	
	float n1, n2, n3, media;
	
	int qtdFaltas, totalAulas;
	
	float porcFaltas;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	fflush(stdin);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("Digite a quantidade de faltas: ");
	scanf("%d", &qtdFaltas);
	fflush(stdin);
	
	printf("Digite o total de aulas dadas: ");
	scanf("%d", &totalAulas);
	
	porcFaltas = (float) qtdFaltas / totalAulas;
	
	printf("\nMédia: %.1f", media);
	printf("\nPorcentagem de faltas: %.1f", porcFaltas * 100);
		
	if(media >= 7.0) {
		if(porcFaltas <= 0.25) {
			printf("\nAprovado por média.\n");
		} else {
			printf("\nReprovado por faltas.\n");
		}
	} else {
		printf("\nEstude mais para a final.\n");
	}
	
	return 0;
	
}
