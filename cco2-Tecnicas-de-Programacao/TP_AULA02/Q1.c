#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if(idade >= 18) {
		printf("\nMaior de idade.");
	} else {
		printf("\nMenor de idade.");
	}
	
	return 0;
}
