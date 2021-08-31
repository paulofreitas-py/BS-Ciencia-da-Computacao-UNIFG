#include<stdio.h>
#include<stdlib.h>

int main() {
    int a;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    fflush(stdin);
    
    if(a % 2 == 0) {
        printf("\nO valor digitado eh par.\n");
    } else {
        printf("\nO valor digitado eh impar.\n");
    }
    
    if(a > 0) {
        printf("\nO valor digitado eh positivo.\n\n");
    } else if(a < 0) {
        printf("\nO valor digitado eh negativo.\n\n");
    } else {
        printf("\nO valor digitado eh zero.\n\n");
    }
    
    system("pause");
}


2-Questão C

#include<stdio.h>
#include<stdlib.h>

int main() {
    float n1, n2, n3;
    float nf;
    
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);
    fflush(stdin);
    printf("\nDigite a segunda nota do aluno: ");
    scanf("%f", &n2);
    fflush(stdin);
    printf("\nDigite a terceira nota do aluno: ");
    scanf("%f", &n3);
    fflush(stdin);
