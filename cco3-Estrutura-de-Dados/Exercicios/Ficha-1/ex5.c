//Faça um programa que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo
//https://www.online-ide.com/64YMqK3hVv
#include<stdio.h>
#include<math.h>
int main(){
  int num;
	scanf("%d",&num);
	if (num < 0){
		printf("NUMERO NEGATIVO\n");
	}
	else if (num >= 0){
		printf("NUMERO POSITIVO\n");
	}
	if (num % 2 == 0){
		printf("NUMERO PAR\n");
	}
	else if (num % 2 != 0){
		printf("NUMERO IMPAR\n");
	}
	return 0;
}