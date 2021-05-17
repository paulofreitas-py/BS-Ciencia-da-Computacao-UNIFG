/*--------UNIFG--------
Estrutura de dados - N1
CCO
3 Período
Grupo: Cristian Matheus Galindo de Brito (202002728)
       Paulo Emanuel Madeira de Freitas (202003566)
       Paulo Montenegro Campos (202000095)

Questão 4: Nessa questão escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N cada. 
A função deve retornar o ponteiro para um vetor C de tamanho N x 2 alocado dinamicamente, em que |C| = |A|+|B|, 
ou seja, a união dos dois conjuntos irá formar o conjunto C, ou vetor C.
Obs. Não esqueça de liberar a memória no final do programa com a função free.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função para alocação de memória do vetor
int *alocaMemoria(int n){
	int *p;
	
	//aloca memória de acordo com o tamanho
	p = (int *) malloc(n * sizeof(int));
	
	return p;		//retorna o valor de p
}

//função pausa
void pausa(){
	system("pause");
}

//função para liberar a memória
void libera(int *p){
	free(p);
}

//função principal
int main(){
	//acentuação
	setlocale(LC_ALL, "");
	
	//variáveis
	int *vetor_a;
    int *vetor_b;
    int *vetor_c;
    int n;
    int i;
    
    // Determina a quantidade de elementos dentro do vetor.
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);		//recebe valor do usuáiro
    fflush(stdin);			//limpa buffer do teclado
    
    // vetor recebe o ponteiro de inteiro.
    vetor_a = alocaMemoria(n);
    vetor_b = alocaMemoria(n);
    vetor_c = alocaMemoria(2*n);
    
    // Laço para armazenar os elementos do vetor_a
    for(i=0; i<n; i++){
        printf("Digite o elemento %d do vetor a: ", i+1);
        scanf("%d", &vetor_a[i]);		//recebe valor do usuáiro
        fflush(stdin);					//limpa buffer do teclado
    }
    
    printf("\n\n");
    
    // Laço para armazenar os elementos do vetor_b
    for(i=0; i<n; i++){
        printf("Digite o elemento %d do vetor b: ", i+1);
        scanf("%d", &vetor_b[i]);		//recebe valor do usuáiro
        fflush(stdin);					//limpa buffer do teclado
    }
    
    printf("\n\n");
    
    // Laço para armazenar os elementos do vetor_c  
    for(i=0; i<(2*n); i++){
    	if(i<n){
        	vetor_c[i] = vetor_a[i];
    	}else{
       		vetor_c[i] = vetor_b[i-n];
		}
    }
    
    //loops para impressão dos vetores
    printf("Impressão dos vetores\n\n");
    for(i=0; i<n; i++){
        printf("\nVetor_b[%d]: %d", i+1, vetor_b[i]);
    }
    printf("\n\n");
    
    for(i=0; i<n*2; i++){
        printf("\nVetor_c[%d]: %d", i+1, vetor_c[i]);
    }
    printf("\n");
    pausa();		//chama a função pausa
    
    //libera a memória alocada
    libera(vetor_a);
    libera(vetor_b);
    libera(vetor_c);
    
    return 0;
}
