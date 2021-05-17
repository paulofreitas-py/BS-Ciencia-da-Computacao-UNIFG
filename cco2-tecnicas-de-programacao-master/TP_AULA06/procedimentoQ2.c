#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu() {
	//system("cls");
	printf("\n*** MENU DE OPÇÕES ***\n\n");
	printf("1. Adição\n");
	printf("2. Subtração\n");
	printf("3. Multiplicação\n");
	printf("4. Divisão\n");
	printf("0. Sair\n");
	printf("\nDigite opção:");
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int operacao;
	
	do {
		menu();
		scanf("%d", &operacao);
	} while(operacao != 0);
	
	return 0;
}
