algoritmo "Q2_LISTA3"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o : digita dois numeros para servir de intervalo.
// Autor : Renan Costa Alencar
// Data : 18/8/2007
// Se��o de Declara��es 
var
n,i,num,cont:inteiro
n_maior,n_menor:inteiro
inicio
// Se��o de Comandos
cont<-0
escreva("Digite a quantidade de numeros: ")
leia(n)
para i<-1 ate n faca
     cont<-cont+1
     escreva("Digite o numero inteiro: ")
     leia(num)
     se (cont=1) entao
        n_menor<-num
        n_maior<-num
     senao
          se (num<n_menor) entao
             n_menor<-num
          senao
               se (num>n_maior) entao
                  n_maior<-num
               fimse
          fimse
     fimse
fimpara
escreva("Menor numero e: ",n_menor)
escreva("Maior numero e: ",n_maior)
fimalgoritmo
