algoritmo "Q7_LISTA2"
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
   escreva(a,",",b," e",c," s�o lados de um triangulo.")
senao
     escreva(a,",",b," e",c," n�o s�o lados de um triangulo.")
fimse
fimalgoritmo
