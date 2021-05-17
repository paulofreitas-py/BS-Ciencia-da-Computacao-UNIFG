#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	
	int a, b, c, cont = 0;
	
	printf("Digite três números: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b && b == c) {
		cont = 3;
	} else if(a == b) {
		cont = 2;
	} else if(b == c) {
		cont = 2;
	} else if(a == c) {
		cont = 2;
	}
	
//	if(a == b && b == c) {
//		cont = 3;
//	} else if(a== b || b == c || a == c) {
//		cont = 2;
//	}
	
	printf("\nQuantidade de números iguais é %d", cont);
	
	
	return 0;
}
