/*--------UNIFG--------
Estrutura de dados - N1
CCO
3 Período
Grupo: Cristian Matheus Galindo de Brito (202002728)
       Paulo Emanuel Madeira de Freitas (202003566)
       Paulo Montenegro Campos (202000095)

Questão 5: 
Estudantes do 3° período de CCO da UNIFG, uma grande empresa está desenvolvendo um novo sistema operacional para máquinas de venda de bolinhas de borracha de R$ 1,00,
mas precisa realizar testes no Gerenciador de Memória desse novo sistema. 
Você foi contratado para fazer um programa para verificar se o gerenciador de memória está funcionando corretamente.
Seu programa deverá ler 3 números inteiros, 3 números decimais, 3 letras, armazená-las em variáveis,
e depois, através de ponteiros, trocar os seus valores, substituindo todos os números inteiros pelo número 2021, os decimais por 9.99, e as letras por ’X’. 
Depois da substituição, o programa deverá exibir o valor das variáveis já devidamente atualizados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
//char 	caracter, float real de precisão simples ,int inteiro
int num1, num2, num3;
int*p_num;
float dec1, dec2, dec3;
float*p_dec;
char letra1, letra2, letra3;
char*p_letra;

// dados 
printf("Digite um numero inteiro: ");
scanf("%d", &num1);
fflush(stdin);
printf("Agora Digite outro numero inteiro: ");
scanf("%d", &num2);
fflush(stdin);
printf("só mais um numero inteiro: ");
scanf("%d", &num3);
fflush(stdin);

printf("Digite um numero decimal: ");
scanf("%f", &dec1);
fflush(stdin);
printf("Digite denovo outro numero decimal diferente: ");
scanf("%f", &dec2);
fflush(stdin);
printf("quase lá.  Digite outro numero decimal: ");
scanf("%f", &dec3);
fflush(stdin);

printf("quase acabando, agora digite uma letra: ");
scanf(" %c", &letra1);
printf("só mais um, digite outra letra: ");
scanf(" %c", &letra2);
printf("acabou esse é o ultimo, agora digite outra letra: ");
scanf(" %c", &letra3);

//printf dos dados anterior
printf("Os numeros informados: \n");
printf("Seus Inteiros: %d, %d e %d \n", num1, num2, num3);
printf("Seus Decimais: %.2f, %.2f e %.2f \n", dec1, dec2, dec3);
printf("Suas Letras: %c, %c e %c \n", letra1, letra2, letra3);
printf("\n");

// variaveis de ponteiros com trocas dos valores anterior
p_num = &num1;
*p_num = 2021;
p_num = &num2;
*p_num = 2021;
p_num = &num3;
*p_num = 2021;

p_dec = &dec1;
*p_dec = 9.99;
p_dec = &dec2;
*p_dec = 9.99;
p_dec = &dec3;
*p_dec = 9.99;

p_letra = &letra1;
*p_letra = 'X';
p_letra = &letra2;
*p_letra = 'X';
p_letra = &letra3;
*p_letra = 'X';

//printf das variaveis com os novos valores
printf("Valores modificados: \n");
printf("Primeiro numero inteiro: %d \n", num1);
printf("Segundo numero inteiro: %d \n", num2);
printf("Terceiro numero inteiro: %d \n", num3);

printf("Primeiro numero decimal: %.2f \n", dec1);
printf("Segundo numero decimal: %.2f \n", dec2);
printf("Terceiro numero decimal: %.2f \n", dec3);

printf("Primeira letra: %c \n", letra1);
printf("Segunda letra: %c \n", letra2);
printf("Terceira letra: %c \n", letra3);
}

