algoritmo "Q9_LISTA3"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o :
// Autor : Renan Costa Alencar
// Data : 16/9/2007
// Se��o de Declara��es 
var
n,i:inteiro
fat:inteiro
inicio
// Se��o de Comandos
escreva("Digite numero: ")
leia(n)
fat<-1
se (n>0) entao
   para i<-1 ate n faca
        fat<-fat*i
   fimpara
   escreva("Fatorial igual a: ",fat)
senao
     escreva("Digite um numero inteiro e positivo.")
fimse
fimalgoritmo
