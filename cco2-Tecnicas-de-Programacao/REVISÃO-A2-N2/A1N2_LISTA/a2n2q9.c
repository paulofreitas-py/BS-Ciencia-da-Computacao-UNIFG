#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TAM 3

// declara um registro para armazenar
// os dados do candidato
typedef struct {
	char nome[20];
	float altura;
	float peso;
	int cpf;
	char sexo;
} pessoa;

// função retorna a opção
// escolhida pelo usuário
int menu() {
	int opt;
	
	system("cls");
	printf("\n*** MENU ***\n");
	printf("\n1. Inserir pessoas");
	printf("\n2. Buscar pessoa");
	printf("\n0. Sair do programa");
	printf("\n\nDigite uma opcao: ");
	
	scanf("%d", &opt);
	fflush(stdin);
	
	system("cls");
	return opt;
}

int main() {
	// declara um vetor do tipo pessoa
	pessoa pessoas[TAM];
	
	// declara variáveis de controle
	int i, opcao;
	
	int cpf_busca, indice = -1;
	// variável para calcular o IMC
	float imc = 0;
	
	// chama a função que retorna a opção escolhida
	opcao = menu();
	
	// enquanto opção for diferente de zero, faça:
	while (opcao != 0) {
		
		// escolha a opção
		switch (opcao) {
			case 1: // inserir dados no vetor pessoas
				for(i = 0; i < TAM; i++) {
					printf("Digite nome: ");
					gets(pessoas[i].nome);
					
					printf("Digite altura (em metros): ");
					scanf("%f", &pessoas[i].altura);
					fflush(stdin);
					
					printf("Digite peso (em quilos): ");
					scanf("%f", &pessoas[i].peso);
					fflush(stdin);
					
					printf("Digite CPF: ");
					scanf("%d", &pessoas[i].cpf);
					fflush(stdin);
					
					printf("Digite SEXO (F-Feminino/M-Masculino): ");
					scanf("%c", &pessoas[i].sexo);
					fflush(stdin);
				}
				
				printf("\n\nDigite qualquer tecla para continuar...");
				getch();
				break;
			case 2:
				printf("\n\nPesquisando um pessoa...\n\n");
				
				printf("Digite o CPF: ");
				scanf("%d", &cpf_busca);
				fflush(stdin);
				
				for(i = 0; i < TAM; i++) {
					// compara pessoas[i].cpf com cpf_busca
					if(pessoas[i].cpf == cpf_busca) {
						// guarda o indice onde o cpf da busca está
						indice = i;
					}
				}
				
				// caso indice seja < 0 
				if( indice < 0) {
					printf("\nPessoa não encontrado!\n");
				} else {
					printf("\nNome: %s", pessoas[indice].nome);
					imc = pessoas[indice].peso / pow(pessoas[indice].altura, 2);
					printf("\nIMC: %.1f", imc);
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

