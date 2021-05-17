#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num % 2 == 0) {
		printf("\n%d é par.", num);
	} else {
		printf("\n%d é impar.", num);
	}
	
	return 0;
}
