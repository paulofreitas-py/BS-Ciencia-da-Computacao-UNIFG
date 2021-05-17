#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	
	float n1, n2, n3, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("Média: %.1f", media);
	
	if(media >= 7.0) {
		printf("\nAprovado.\n");
	} else {
		printf("\nEstude mais para a final.\n");
	}
		
	//(media >= 7.0) ? printf("\nAprovado.\n") : printf("\nEstude mais para a final.\n");
	// codição ? valor_verdadeiro : valor_falso
	return 0;
	
}
