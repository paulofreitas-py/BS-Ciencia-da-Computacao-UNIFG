algoritmo "Q13_LISTA3"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o :
// Autor : Renan Costa Alencar
// Data : 20/8/2007
// Se��o de Declara��es 
var
n,i,mmc:inteiro
inicio
// Se��o de Comandos
escreva("Digite numero inteiro positivo: ")
leia(n)
se (n>0) entao
   mmc<-0
   para i<-1 ate n faca
        se (n mod i=0) entao
           mmc<-mmc+1
        fimse
   fimpara
   se (mmc=2) entao
      escreva("Numero digitado e primo.")
   senao
        escreva("Numero digitado nao e primo.")
   fimse
senao
escreva("Numero digitado nao e inteiro positivo.")
fimse
fimalgoritmo
