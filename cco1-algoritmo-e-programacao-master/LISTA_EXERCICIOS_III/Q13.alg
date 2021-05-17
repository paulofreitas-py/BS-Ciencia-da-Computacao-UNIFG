algoritmo "Q13_LISTA3"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função :
// Autor : Renan Costa Alencar
// Data : 20/8/2007
// Seção de Declarações 
var
n,i,mmc:inteiro
inicio
// Seção de Comandos
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
