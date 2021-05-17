#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TAM 3

// declara um registro para armazenar
// os dados do candidato
typedef struct {
	int codigo;
	char nome[20];
	float preco;
} produto;

// função retorna a opção
// escolhida pelo usuário
int menu() {
	int opt;
	
	system("cls");
	printf("\n*** MENU ***\n");
	printf("\n1. Inserir produtos");
	printf("\n2. Exibir lista de produtos");
	printf("\n3. Buscar produto");
	printf("\n0. Sair do programa");
	printf("\n\nDigite uma opcao: ");
	
	scanf("%d", &opt);
	fflush(stdin);
	
	system("cls");
	return opt;
}

int main() {
	// declara um vetor do tipo produto
	produto produtos[TAM];
	
	// declara variáveis de controle
	int i, opcao;
	// variáveis que armazenam os indices
	int indice = -1;
	// declara string para realizar a busca
	int codigo_busca;
		
	// chama a função que retorna a opção escolhida
	opcao = menu();
	
	// enquanto opção for diferente de zero, faça:
	while (opcao != 0) {
		
		// escolha a opção
		switch (opcao) {
			case 1: // inserir dados no vetor produtos
				for(i = 0; i < TAM; i++) {
					printf("Digite código: ");
					scanf("%d", &produtos[i].codigo);
					fflush(stdin);
					
					printf("Digite nome: ");
					gets(produtos[i].nome);
					
					printf("Digite preco: ");
					scanf("%f", &produtos[i].preco);
					fflush(stdin);
				}
				
				printf("\n\nDigite qualquer tecla para continuar...");
				getch();
				break;
			case 2: // Imprime lista de produtos
				printf("\n\nImprimindo a lista de produtos...\n\n");
				for (i = 0; i < TAM; i++) {
					printf("\nCódigo: %d\n", produtos[i].codigo);
					printf("Nome: %s\n", produtos[i].nome);
					printf("Preço: R$%.2f\n", produtos[i].preco);
				}
				
				printf("\n\nDigite qualquer tecla para continuar...");
				getch();
				break;
			case 3:
				printf("\n\nPesquisando um produto...\n\n");
				
				printf("Digite código: ");
				scanf("%d", &codigo_busca);
				
				for(i = 0; i < TAM; i++) {
					// compara produtos[i].nome com nome_busca
					if(produtos[i].codigo == codigo_busca) {
						// guarda o indice onde o nome da busca está
						indice = i;
					}
				}
				
				// caso indice seja < 0 
				if( indice < 0) {
					printf("\nProduto não encontrado!\n");
				} else {
					printf("\nNome: %s", produtos[indice].nome);
					printf("\nPreço: R$%.2f", produtos[indice].preco);
				}
				
				indice = -1;
				
				printf("\n\nDigite qualquer tecla para continuar...");
				getch();
				
				break;
			default:
				printf("\nOpcao invalida!\n");
				printf("\n\nDigite qualquer tecla para continuar...");
				getch();		
		}
		
		opcao = menu();
	}	
	return 0;
}

