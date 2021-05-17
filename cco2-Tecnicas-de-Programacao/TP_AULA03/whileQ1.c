#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	float n1, n2, media;
	int contador = 0;
	
	while(contador < 5) {
		printf("Digite as duas notas: ");
		scanf("%f %f", &n1, &n2);
		
		media = (n1 + n2) / 2;
		
		printf("\nMédia: %.1f\n", media);
		
		contador++; //contador = contador + 1
	}
	
	system("pause");
	
	return 0;
}
