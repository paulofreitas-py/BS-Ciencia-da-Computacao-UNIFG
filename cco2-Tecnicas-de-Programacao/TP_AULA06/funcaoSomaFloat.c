#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// assinatura da função
float soma(float a, float b);

int main(int argc, char *argv[]) {
	float num1 = 6.75, num2 = 3.48;
	float num3;
	
	// o retorno da funçao soma sera impresso
	printf("%.1f + %.1f = %.1f\n", num1, num2, soma(num1, num2));
	
	// a função soma retorna um float que será
	// armazenado pela variável num3
	num3 = soma(num1, num2);
	
	printf("\nResultado: %.1f\n", num3);
	return 0;
}

// implementação função
float soma(float a, float b) {
	float resultado;
	resultado = a + b;
	return resultado;
}
