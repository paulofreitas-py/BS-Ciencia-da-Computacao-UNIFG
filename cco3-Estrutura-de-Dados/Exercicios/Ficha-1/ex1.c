//Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um programa que calcule seu peso ideal, utilizando a seguinte fórmula:
//peso ideal = (72.7*h) -58
//https://www.online-ide.com/Ub54hyuVnf

#include <stdio.h>

int main()
{
    float Altura,AlturaxPeso=0.0;
    char Sexo;

    printf("Exercicio 1\nDigite a sua altura (Ex.: 1.75):");
    fflush(stdin);
    scanf("%f",&Altura);

    printf("Digite o seu sexo (M para Masculino ):");
    fflush(stdin);
    scanf("%c",&Sexo);

    if(Sexo == 'M'){
        AlturaxPeso+=((72.7*Altura)-58);
        printf("O seu peso ideal e: %.3f\n",AlturaxPeso);
    }
  

    system("pause");
}