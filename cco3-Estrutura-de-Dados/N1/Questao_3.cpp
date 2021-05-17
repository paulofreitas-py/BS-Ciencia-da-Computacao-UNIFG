/*--------UNIFG--------
Estrutura de dados - N1
CCO
3 PerÃ­odo
Grupo: Cristian Matheus Galindo de Brito (202002728)
       Paulo Emanuel Madeira de Freitas (202003566)
       Paulo Montenegro Campos (202000095)

Questão 3: 
Nessa questão escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente contendo N linhas e N colunas. 
Essa matriz deve conter o valor 0 na diagonal principal, o valor 2 nos elementos acima da diagonal principal e o valor -3 nos elementos abaixo da diagonal principal. 
Veja a figura para entender melhor o preenchimento da matriz. Lembrar que a matriz deve ser quadrada. (Número de linha e colunas iguais).
0 2 2
-3 0 2
-3 -3 0
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
       //Matriz com os elementos jÃ¡ preenchidos
       int num[3][3] = {{0, 2, 2}, {-3, 0, 2}, {-3, -3, 0}};
       int n2[3][3];
       int i, j;

       printf("Matriz Preenchida\n");
       //Loop de for para que possa printar na tela toda a Matriz.
       for (j = 0; j <= 2; j++)
       {
              for (i = 0; i <= 2; i++)
              {
                     printf("%d\t", num[j][i]);
              }
              printf("\n");
       }
       printf("Preencha a matriz com os numeros\n");
       //Loop para preencher a Matriz
       for (j = 0; j <= 2; j++)
       {
              for (i = 0; i <= 2; i++)
              {
                     printf("Numero [%d][%d] : \n", j + 1, i + 1);
                     scanf("%d", &n2[j][i]);
              }
              printf("\n");
       }

       printf("Matriz Preenchida:\n");
       //Loop para Printar a Matriz.
       for (j = 0; j <= 2; j++)
       {
              for (i = 0; i <= 2; i++)
              {
                     printf("%d\t", n2[j][i]);
              }
              printf("\n");
       }
}
