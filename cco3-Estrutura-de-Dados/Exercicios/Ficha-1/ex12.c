//Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 e cresce tem 3 centímetros por ano. 
//Construa um programa que calcule e imprima quantos anos serão necessários para que Ciclano seja maior que Fulano.
//https://www.online-ide.com/QOI3M6ZVmt
#include <stdio.h>
int main() {
	int anos=0;
	float fulano=1.5, deltrano=1.1;
	while (fulano >= deltrano) {

		anos++;
		fulano += 0.02;
		deltrano += 0.03;
	}
	printf("fulano ultrapassará a altura de deltrano em %d anos\nfulano: %.2f\tdeltrano: %.2f\n", anos, fulano, deltrano);
	return 0;
}