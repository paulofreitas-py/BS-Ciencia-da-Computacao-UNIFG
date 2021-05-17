#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// implementação do procedimento menu()
void menu() {
	// limpar a tela
	system("cls");
	printf("\n*** MENU DE OPÇÕES ***\n");
	printf("\n(1) para armazenar 02 notas e os nomes de 05 alunos em um vetor.");
	printf("\n(2) para exibir a média geral dos alunos.");
	printf("\n(3) para exibir os nomes e as notas dos alunos.");
	printf("\n(4) para exibir as médias e status de aprovação dos alunos.");
	printf("\n(0) para sair.\n");
	printf("\nSelecione a opcão desejada: ");
}

int main() {
	setlocale(LC_ALL, "");
	// declara uma matriz de string para 5 alunos
	char nomes[5][10];
	// declara uma matriz de notas para 5 alunos
	float notas[5][2];
	// declara as variáveis de controle do programa
	int i, opcao;
	// declara uma variável para calculo da média
	float media = 0.0;
	
	// chama o procedimento menu() para exibir menu de opções
	menu();
	// armazena a opção digitada
	scanf("%d", &opcao);
	fflush(stdin);
	
	// loop que se repete até a opção seja igual a zero
	while(opcao != 0) {
		// testa opcao digitada
		switch(opcao) {
			case 1:
				// armazena nomes e notas de cinco alunos
				for(i = 0; i < 5; i++) {
					printf("Digite nome: ");
					fgets(nomes[i], 10, stdin);
					printf("Digite as duas notas: ");
					scanf("%f %f", &notas[i][0], &notas[i][1]);
					fflush(stdin);
				}
				
				// pausa o programa
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();
				
				break;
			case 2:
				// calcula e mostra a média geral dos alunos
				for(i = 0; i < 5; i++) {
					// somatoria de todas as notas de todos os alunos
					media += notas[i][0] + notas[i][1];
				}
				
				media /= (5 * 2); // media = media / (5 * 2)
				printf("\nMédia Geral: %.1f", media);
				
				// pausa o programa
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();
				
				break;
			case 3:
				// imprime lista de alunos e suas notas
				for(i = 0; i < 5; i++) {
					printf("\nNome: %s", nomes[i]);
					printf("\nNotas: %.1f %.1f", notas[i][0], notas[i][1]);
				}
				
				// pausa o programa
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();
				
				break;
			case 4:
				// imprime lista de média e situação dos alunos
				for(i = 0; i < 5; i++) {
					printf("\nNome: %s", nomes[i]);
					media = (notas[i][0] + notas[i][1]) / 2;
					printf("\nMédia %.1f", media);
					if( media >= 7.0) {
						printf("\nSituação: Aprovado");
					} else {
						printf("\nSituação: Reprovado");
					}
				}
				
				// pausa o programa
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();
				
				break;
			default:
				printf("\nOpção digitada inválida!");
				
				// pausa o programa
				printf("\n\nDigite qualquer tecla para continuar...");
				getchar();	
				
		}
		
		// chama o menu de opções novamente
		menu();
		scanf("%d", &opcao);
		fflush(stdin);
	}
	
	return 0;
}
