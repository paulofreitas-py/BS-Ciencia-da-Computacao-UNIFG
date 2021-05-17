#include <stdio.h>
#include <stdlib.h>
// biblioteca string.h para manipular strings
#include <string.h>
// biblioteca locale.h para corrigir acentuação
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	
	char nome[20], sobrenome[20], rua[30], numero[5], bairro[30], cidade[30];
	//char nomeCompleto[45] = "", enderecoCompleto[100] = "";
	char nomeCompleto[45], enderecoCompleto[100];
	
	printf("Digite seu nome: ");
	fgets(nome, 20, stdin);
	
	printf("Digite seu sobrenome: ");
	fgets(sobrenome, 20, stdin);
	
	printf("Digite a rua: ");
	fgets(rua, 30, stdin);
	
	printf("Digite o número: ");
	fgets(numero, 5, stdin);
	
	printf("Digite o bairro: ");
	fgets(bairro, 30, stdin);
	
	printf("Digite a cidade: ");
	fgets(cidade, 30, stdin);
	
	// copiando nome para dentro de nomeCompleto
	strcpy(nomeCompleto, nome);
	// concatenando nomeCompleto com sobrenome
	strcat(nomeCompleto, sobrenome);
	printf("\nNome completo: %s", nomeCompleto);
	
	// copiando rua para dentro de enderecoCompleto
	strcpy(enderecoCompleto, rua);
	// concantonando os elementos para dentro de enderecoCompleto
	strcat(enderecoCompleto, numero);
	strcat(enderecoCompleto, bairro);
	strcat(enderecoCompleto, cidade);
	printf("\nEndereço completo: %s\n\n", enderecoCompleto);
	
	// utilizando sprintf para concatenar strings
	strcpy(nomeCompleto, "");
	strcpy(enderecoCompleto, "");
	
	sprintf(nomeCompleto, "%s %s", nome, sobrenome);
	sprintf(enderecoCompleto, "%s %s %s %s", rua, numero, bairro, cidade);
	
	printf("\n\nNome completo: %s", nomeCompleto);
	printf("\nEndereço completo: %s", enderecoCompleto);
	
	return 0;	
	
}
