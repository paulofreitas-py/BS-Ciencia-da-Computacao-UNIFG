algoritmo "Q3_LISTA3"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função : lê cem numeros depois imprime a soma e a media.
// Autor :
// Data : 19/8/2007
// Seção de Declarações 
var
n,soma,i:inteiro
med_n:real
inicio
// Seção de Comandos
soma<-0
med_n<-0
escreva("Digite numero: ")
leia(n)
para i<-1 ate 100 faca
soma<-soma+n
med_n<-soma/100
escreva("Digite numero: ")
leia(n)
fimpara
escreva("A soma dos numeros e: ",soma)
escreva("A media dos numeros e: ",med_n)
fimalgoritmo
