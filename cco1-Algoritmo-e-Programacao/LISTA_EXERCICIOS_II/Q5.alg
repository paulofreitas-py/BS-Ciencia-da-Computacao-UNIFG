algoritmo "Q5_LISTA2"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o : verificar se o numero digitado eh impar ou par.
// Autor : Renan Costa Alencar
// Data : 18/8/2007
// Se��o de Declara��es 
var
x,y:inteiro
a,b:inteiro
inicio
// Se��o de Comandos
escreva("Digite numero: ")
leia(x,y)
se (x<y) entao
   a<-x
   b<-y
   escreva(a,",",b)
senao
     b<-x
     a<-y
     escreva(a,",",b)
fimse
fimalgoritmo
