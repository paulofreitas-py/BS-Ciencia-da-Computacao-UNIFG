//Escreva uma Programa para calcular N! (Fatorial de N), sendo que ovalor inteiro de N é fornecido pelo usuário.
//Sabe-se que: N! = 1 * 2 * 3 *... * (N-1) * N; 
//0! = 1, por definição.
//https://www.online-ide.com/plDOU79dIe

#include <stdio.h>

int main()

{

   int fat, n;
   printf("Insira um valor para o qual deseja calcular seu fatorial: ");
   scanf("%d", &n);
   for(fat = 1; n > 1; n = n - 1)
       fat = fat * n;
   printf("\nFatorial calculado: %d", fat);
   return 0;

}