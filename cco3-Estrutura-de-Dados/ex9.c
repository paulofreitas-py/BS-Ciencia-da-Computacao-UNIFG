//converter Celsius para Fahrenheit
//https://www.online-ide.com/t2EMovhrNw
#include <stdio.h>
 
int main(void)
{
    float c, f;
    printf("C = "); scanf("%f", &c);
    f = (9 * c + 160) / 5;
    printf("F = %f", f);
    return(0);
}