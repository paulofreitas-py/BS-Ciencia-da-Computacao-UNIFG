algoritmo "Q8_LISTA2"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o : verificar se o numero digitado eh impar ou par.
// Autor : Renan Costa Alencar
// Data : 18/8/2007
// Se��o de Declara��es 
var
a,b,c:real
inicio
// Se��o de Comandos
escreva("Digite numero: ")
leia(a,b,c)
se (a<b+c) e (b<a+c) e (c<a+b) entao
   se (a<>b) e (b<>c) e (a<>c) entao
      escreva("Os lados formam um triangulo escaleno.")
   senao
        se (a=b) e (b<>c) ou (a<>b) e (b=c) entao
           escreva("Os lados formam um triangulo isoceles.")
        senao
             se (a=b) e (b=c) entao
                escreva("Os lados formam um triangulo equilatero.")
             fimse
        fimse
   fimse
senao
     escreva(a,",",b," e ",c," n�o s�o lados de um triangulo.")
fimse
fimalgoritmo
