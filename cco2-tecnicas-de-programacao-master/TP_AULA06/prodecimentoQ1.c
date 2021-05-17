#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void imprimir(char n[], char s[]);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	char nome[20], sobrenome[20];
	
	printf("Digite nome: ");
	fgets(nome, 20, stdin);
	
	printf("Digite sobrenome: ");
	fgets(sobrenome, 20, stdin);
	
	imprimir(nome, sobrenome);
	
	return 0;
}

void imprimir(char n[], char s[]) {
	printf("\nSeu nome completo é %s %s\n", n, s);
}
