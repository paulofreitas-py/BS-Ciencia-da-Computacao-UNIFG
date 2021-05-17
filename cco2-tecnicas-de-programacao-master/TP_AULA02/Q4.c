#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	int a, b, c;
	
	printf("Digite três números: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a < b && a < c && b < c) { // a < b < c
		printf("%d %d %d", a, b, c); // a b c
	} else if(c < a && c < b && a < b) { // c < a < b
		printf("%d %d %d", c, a, b); // c a b
	} else if(b < c && b < a && c < a){ // b < c < a
		printf("%d %d %d", b, c, a); // b c a
	} else if( a < c && a < b && c < b) { // a < c < b
		printf("%d %d %d", a, c, b); // a c b
	} else if( c < b && c < a && b < a) { // c < b < a
		printf("%d %d %d", c, b, a); // c b a
	} else if(b < a && b < c && a < c) { // b < a < c
		printf("%d %d %d", b, a, c); // b a c
	}
	
	return 0;
}
