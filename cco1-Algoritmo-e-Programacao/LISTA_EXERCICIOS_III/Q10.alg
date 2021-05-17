algoritmo "Q10_LISTA3"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função :
// Autor : Renan Costa Alencar
// Data : 16/9/2007
// Seção de Declarações 
var
n,i:inteiro
h:real
inicio
// Seção de Comandos
escreva("Digite numero: ")
leia(n)
h<-0
se (n<>0) entao
   para i<-1 ate n faca
        h<-h+(1/i)
   fimpara
   escreva("Soma igual a: ",h)
senao
     ("Digite numero diferente de zero")
fimse
fimalgoritmo
