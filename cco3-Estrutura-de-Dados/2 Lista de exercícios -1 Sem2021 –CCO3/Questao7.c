#include <stdlib.h>
#include <stdio.h>

struct tipo_complexo {
   float real;
   float imag;
};


struct tipo_complexo *soma_complexo(struct tipo_complexo a, struct tipo_complexo b)
{
  struct tipo_complexo *p;

  p = (struct tipo_complexo*) malloc(sizeof(struct tipo_complexo));

  if (p != NULL) {
      p->real = a.real + b.real;
      p->imag = a.imag + b.imag;
  }

  return p;
}

int main()
{
  struct tipo_complexo alfa = {2.5, 3.6}, beta = {2.9, 8.7}, *p_result;
 
  p_result = soma_complexo(alfa, beta);

  printf("%f %f\n", p_result->real, p_result->imag);
  free(p_result);
  p_result = NULL;

  return (0);
}