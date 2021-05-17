#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1, n2, resultado = 0, contador = 0;
	
	printf("Digite dois números: ");
	scanf("%d %d", &n1, &n2);
	
	printf("\nn1: %d n2: %d resultado: %d contador: %d\n", n1, n2, resultado, contador);
	
	while(contador < n2) {
		resultado = resultado + n1;
		contador++; // contador = contador + 1
		printf("\nn1: %d n2: %d resultado: %d contador: %d\n", n1, n2, resultado, contador);
		system("pause");
	}
	
	printf("\nResultado de %d * %d = %d\n", n1, n2, resultado);
	
	return 0;
}
