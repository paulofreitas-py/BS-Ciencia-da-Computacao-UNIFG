algoritmo "Q15_LISTA3"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o :
// Autor : Renan Costa Alencar
// Data : 20/8/2007
// Se��o de Declara��es 
var
nl,c1,c2,ng:inteiro
q,r:inteiro
inicio
// Se��o de Comandos
escreva("Digite o numero inteiro positivo: ")
leia(nl)
se (nl>0) entao
   c1<-nl div 10
   c2<-nl mod 10
   ng<-(c2*10)+c1
   escreva("Novo numero e: ",ng)
senao
     escreva("N�o e um numero inteiro positivo.")
fimse
fimalgoritmo
