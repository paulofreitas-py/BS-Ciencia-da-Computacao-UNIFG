//Dadosos 3 valores A,B,C, verificar se eles podem ser os comprimentos dos lados de um triânguloe, se forem, verificar se compõem um triângulo equilátero, isósceles ou escaleno.Informar se não compuseram nenhum triângulo.
//https://www.online-ide.com/jdC9ieb2aw

#include <stdio.h>

int main()
{
    int A, B, C;
    
    printf("Informe as medidas dos três lados (A, B e C).\n");
    scanf("%d%d%d",&A, &B, &C);
    
    if (A > B + C || B > A + C || C > A + B ){
        printf("As medidas informadas não constituem um triângulo\n");
    }
    
    if (A == B && B == C){
        
        printf("O triângulo formado é equilátero.");
        
    } else if((A == B && B != C) || (A != B && B == C) || (A == C && B != C)){
        
        printf("O triângulo formado é isóceles.");
        
    } else if (A != B && B != C && A != C){
        
        printf("O triângulo formado é escaleno.");
        
    }
    

    return 0;
}