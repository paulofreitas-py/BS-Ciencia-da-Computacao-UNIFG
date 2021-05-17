#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	int opcao;
	
	printf("Digite o código do curso: ");
	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1:
			printf("\nVocê pertence ao curso de psicologia.\n");
		break;
		case 2:
			printf("\nVocê pertence ao curso de gastronomia.\n");
		break;
		case 3:
			printf("\nVocê pertence ao curso de fármacia.\n");
		break;
		case 4:
			printf("\nVocê pertence ao curso de enfermagem.\n");
		break;
		case 5:
			printf("\nVocê pertence ao curso de gestão da tecnologia da informação.\n");
		break;
		case 6:
			printf("\nVocê pertence ao curso de engenharia elétrica.\n");
		break;
		case 7:
			printf("\nVocê pertence ao curso de ciência da computação.\n");
		break;
		default:
			printf("\nVocê pertence a curso algum da UNIFG.\n");
	}
	
	return 0;
}
