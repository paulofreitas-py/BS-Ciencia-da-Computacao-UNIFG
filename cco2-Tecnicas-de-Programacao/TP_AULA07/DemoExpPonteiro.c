#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 5;
	int y;
	int *p = NULL;
	// p recebe o end de mem de x
	p = &x;
	
	y = *p + 2; // y recebe o valor 5 + 2 = 7
	y += *p; // y = y + *p, y recebe o valor 7 + 5 = 12
	*p = y;  // x recebe o valor de y = 12
	(*p)++; // x é incrementado para 13
	printf("p esta apontando para o valor %d\n", *p);

	return 0;
}
