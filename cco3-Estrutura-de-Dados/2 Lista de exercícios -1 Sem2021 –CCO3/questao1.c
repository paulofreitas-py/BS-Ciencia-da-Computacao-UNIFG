//Questão 1
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

void limpatela(){
	system("CLS");
}

int main(){
	setlocale(LC_ALL, "");
	
	int op = 1;
	float salarioInicial, salarioFinal;
	
	while (op != 0){
		printf("Digite o seu salário para descobrir o seu reajuste.\n\n");
		getchar();
		
		printf("Digite aqui o seu valor recebido em seu salário: ");
		scanf("%f",&salarioInicial);
		
		limpatela();
		
		if (salarioInicial <= 500){
			salarioFinal = salarioInicial * 1.5;
			printf("Seu salário recebeu um reajuste de 50 porcento.\n");
			printf("Seu novo salário é de: %.2f\n\n", salarioFinal);
		}else{
			salarioFinal = salarioInicial * 1.3;
			printf("Seu salário recebeu um reajuste de 30 porcento.\n");
			printf("Seu novo salário é de: %.2f\n\n", salarioFinal);
		}
		printf("Digite 0 para sair, ou qualquer outro número para realizar uma nova operação.\n");
		scanf("%d",&op);
		limpatela();
	}
	printf("\n\nOperação finalizada pelo usuário.\n\n");
	getchar();
	
}