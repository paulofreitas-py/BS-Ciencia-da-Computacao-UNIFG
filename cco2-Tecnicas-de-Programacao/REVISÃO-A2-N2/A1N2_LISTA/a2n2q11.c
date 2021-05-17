#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* constante para determinar o tamanho do vetor */
#define MAX 3

/* Define uma estrutura que representa uma conta bancária */
typedef struct {
	int cpf;
	char nome[20];
	float saldo;
} conta;

/* Uma outra forma de declarar a estrutura conta seria assim:
struct conta {
	int cpf;
	char nome[20];
	float saldo;
};

Na hora de declarar um vetor de contas ficaria assim:
struct conta contas[MAX];
*/

/* Função menu que mostra as opções e retorna a opção escolhida */
int menu() {
	int opcao;
	
	system("cls");
	printf("\n*** MENU ***\n");
	printf("\n1. Cadastrar contas");
	printf("\n2. Realizar depósito");
	printf("\n3. Realizar saque");
	printf("\n0. Sair");
	printf("\nDigite uma opção: ");
	
	scanf("%d", &opcao);
	fflush(stdin);
	
	system("cls");
	
	return opcao;
}

/* Prodecimento que pausa a aplicação */
void pausar() {
	printf("\nDigite qualquer tecla para continuar...");
	getch();
}

int main() {
	setlocale(LC_ALL,"");
	
	// declara um vetor do tipo conta de tamanho MAX
	conta contas[MAX];
	// declara as variáveis para representar:
	// opção: opc
	// i: variavel de controle do loop
	// encontrou: variável para indicar se encontrou conta com o nome buscado
	// indMenorSaldo: guarda o indice no vetor com conta de menor saldo
	int opc, i, encontrou;
	// declara string para guardar o nome a ser buscado
	int cpf, deposito, saque;
	
	// opc recebe o número retornado pela função menu()
	opc = menu();
	
	// enquanto opc for diferente de zero, repita:
	while (opc != 0) {
		
		// testa a opção digitada
		switch(opc) {
			case 1: // insere as contas dentro do vetor
				
				// percorre o vetor para preencher com os dados
				for (i = 0; i < MAX; i++) {
					printf("Digite número de CPF: ");
					scanf("%d", &contas[i].cpf);
					fflush(stdin);
					
					printf("Digite nome do cliente: ");
					fgets(contas[i].nome, 20, stdin);
					fflush(stdin);
					
					printf("Digite o valor do deposito inicial: ");
					scanf("%f", &contas[i].saldo);
					fflush(stdin);
				}
				
				pausar();
				break;
			case 2: // realiza deposito
				printf("Digite o CPF para a busca: ");
				scanf("%d", &cpf);
				fflush(stdin);
				// encontrou recebe zero para marcar que 
				// ainda não foi encontrado nenhuma conta
				// com o nome digitado pelo usuário
				encontrou = 0;
				
				
				// percorre o vetor para buscar o nome digitado
				for (i = 0; i < MAX; i++) {
					// compara o nome digitado com o nome da conta na posição 'i'
					if(cpf == contas[i].cpf) {
						printf("\n*** EXIBIÇÃO ***\n");
						printf("\nNúmero: %d", contas[i].cpf);
						printf("\nNome: %s", contas[i].nome);
						
						float deposito;
						
						printf("Digite valor para depósito: ");
						scanf("%f", &deposito);
						fflush(stdin);
						
						contas[i].saldo += deposito;
						
						printf("\nNovo saldo: R$%.2f", contas[i].saldo);
						encontrou++; // encontrou = encontrou + 1
					}
				}
				
				// caso o nome não foi encontrado no vetor contas...
				if(encontrou == 0) {
						printf("\nCPF digitado não foi encontrado!");
					} 
				
				pausar();
				break;
			case 3: // realiza saque
				printf("Digite o CPF para a busca: ");
				scanf("%d", cpf);
				fflush(stdin);
				// encontrou recebe zero para marcar que 
				// ainda não foi encontrado nenhuma conta
				// com o nome digitado pelo usuário
				encontrou = 0;
				
				
				// percorre o vetor para buscar o nome digitado
				for (i = 0; i < MAX; i++) {
					// compara o nome digitado com o nome da conta na posição 'i'
					if(cpf == contas[i].cpf) {
						printf("\n*** EXIBIÇÃO ***\n");
						printf("\nNúmero: %d", contas[i].cpf);
						printf("\nNome: %s", contas[i].nome);
						printf("\nNovo saldo: R$%.2f", contas[i].saldo);
						
						float saque;
						
						printf("Digite valor para saque: ");
						scanf("%f", &saque);
						fflush(stdin);
						
						contas[i].saldo += deposito;
						
						printf("\nNovo saldo: R$%.2f", contas[i].saldo);
						encontrou++; // encontrou = encontrou + 1
					}
				}
				
				// caso o nome não foi encontrado no vetor contas...
				if(encontrou == 0) {
						printf("\nCPF digitado não foi encontrado!");
					} 
				
				pausar();
				break;
			default:
				printf("\nOpção digitada inválida!\n");
				pausar();
				break;
		}
		
		opc = menu();
	}
	
	return 0;
}

