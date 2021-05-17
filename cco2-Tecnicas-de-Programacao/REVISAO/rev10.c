#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// prototipo para a função que calcula a potência
int potencia(int numero, int expoente);

// função principal main()
int main() {
	setlocale(LC_ALL, "");
	// declara duas variáveis para armazenar numero e potencia
	// digitados pelo usuário
	int num, pot;
	
	// captura os valores digitados pelo usuário
	printf("Digite um número a potência: ");
	scanf("%d %d", &num, &pot);
	
	// imprime a potência calculada chamando
	// a função potencia(num, pot)
	printf("\n%d ^ %d = %d", num, pot, potencia(num, pot));
	
	return 0;
}

// implementação da função potência
int potencia(int numero, int expoente) {
	int i, resultado = numero;
	// loop para calcular a repetição de multiplicações
	for(i = 1; i < expoente; i++) {
		resultado *= numero; // resultado = resultado * numero;
	}
	
	// retorna para onde foi chamado o valor da potência calculada
	return resultado;	
}

// 3 ^ 3 = 3 * 3 * 3 duas repetições de multiplcação
// i de 1 até 2 (3 - 1 ou seja 'i < expoente')

// resultado = 3 * 3
// resultado = 9 * 9
