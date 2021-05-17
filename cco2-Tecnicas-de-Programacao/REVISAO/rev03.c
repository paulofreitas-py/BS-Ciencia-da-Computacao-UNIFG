#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "");
	// declara dois vetores de tamanho 10
	int numeros[10], oposto[10];
	// declara a variável i de controle para o loop;
	// declara a variável rev que armazena o número invertido;
	// declara digito que vai armazenar o digito do número original;
	// declara num que armazena o número original
	int i, rev, digito, num;
	
	// loop para armanezar 10 números inteiros
	for (i = 0; i < 10; i++) {
		printf("Digite número: ");
		scanf("%d", &numeros[i]);
		// limpa o buffer do teclado
		fflush(stdin);
	}
	
	printf("\n");
	for(i = 0; i < 10; i++) {
		printf("%d ", numeros[i]);
	}
	printf("\n");
	
	// loop para invertir cada número
	// do vetor numeros
	for (i = 0; i < 10; i++) {
		// atribui zero ao número invertido
		rev = 0;
		// atribui o número a ser invertido para num
		num = numeros[i];
		// enquanto numero for maior zero faça
		while (num > 0) {
			// armazena um digito do número original
			digito = num % 10;
			rev = (rev * 10) + digito;
			num /= 10; // num = num / 10
		}
		oposto[i] = rev;
		
	}
	
	// 548
	// digito = 8
	// rev = rev * 10 + digito --> rev = 8
	// num /= 10 --> num = 54
	// digito = 4
	// rev = 8 * 10 + 4 --> rev = 84
	// num = 54 /10 --> num = 5
	// digito = 5
	// rev = 84 * 10 + 5 --> rev = 845
	// num = 5 / 10 --> num = 0
	
	// imprimindo o vetor oposto
	printf("\n");
	for(i = 0; i < 10; i++) {
		printf("%d ", oposto[i]);
	}
	printf("\n");
	
	return 0;
}

