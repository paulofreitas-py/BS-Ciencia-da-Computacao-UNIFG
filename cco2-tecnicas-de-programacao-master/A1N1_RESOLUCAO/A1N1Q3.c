#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void surpresa(int n) {
	int a = 0, b = 0;
	while (n > 0) {
		if((n % 2) == 0)
			a = a +1;
		else
			b = b + 1;
		n = n / 2;
	}
	printf("%d %d\n", a, b);
}
int main(int argc, char *argv[]) {
	surpresa(48);
	surpresa(46);
	surpresa(44); // números são iguais
	surpresa(45);
	surpresa(47);
	return 0;
}
