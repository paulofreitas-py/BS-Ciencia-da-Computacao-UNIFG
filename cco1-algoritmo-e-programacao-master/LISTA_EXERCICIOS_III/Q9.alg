algoritmo "Q9_LISTA3"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função :
// Autor : Renan Costa Alencar
// Data : 16/9/2007
// Seção de Declarações 
var
n,i:inteiro
fat:inteiro
inicio
// Seção de Comandos
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
