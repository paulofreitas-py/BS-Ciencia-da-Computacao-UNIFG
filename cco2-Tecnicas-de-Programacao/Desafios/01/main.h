#include<stdio.h> // bilbioteca de entrada e saida

#include<string.h> // biblioteca de tratamento de strings

#include<stdlib.h>

// estrutura que guarda os dados dos jogadores

struct estrutura_jogadores

{

int num; // numero da camisa!

float peso; // peso do jogador

float altura; // altura do jogador

char i_nome; // primeira letra do nome do jogador

};

int main ()

{

struct estrutura_jogadores jogador [3];

float mais_baixo = 0.0;

float mais_gordo = 0.0;

unsigned char indice = 0;

char inicial;

for (indice = 0; indice <3; indice++)

{

printf("digite o numero da camisa:\n");

fflush (stdin); // limpeza dos buffers de saida

scanf("%d", &jogador[indice].num);

printf("digite o peso:\n");

fflush(stdin);// limpeza dos buffers de saida

scanf("%f", &jogador[indice].peso);

printf("digite a altura:\n");

fflush(stdin); // limpeza dos buffers de saida

printf("digite a letra inicial do nome do jogador:\n");

fflush(stdin);// limpeza dos buffers de saida

scanf("%c", &jogador[indice].i_nome);

}

mais_baixo=jogador[0].altura;

inicial=jogador[0].i_nome;

mais_gordo=jogador[0].peso;

for (indice=1; indice<3; indice++)

{

if (jogador[indice].peso > mais_gordo)

mais_gordo=jogador[indice];

if (jogador[indice].altura < mais_baixo)

{

mais_baixo = jogador[indice].altura;

inicial = jogador[indice].i_nome;

}

}

printf("A inicial do jogador mais baixo e: %c \n \n", inicial);

printf("O jogador mais pesado tem: %3.2f quilos \n \n", mais_gordo);

system("pause");

}
