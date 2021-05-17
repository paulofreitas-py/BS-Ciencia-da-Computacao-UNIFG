algoritmo "Q11"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função :
// Autor : Renan Costa Alencar
// Data : 21/8/2007
// Seção de Declarações 
var
i,j,fat_den,den:inteiro
s:real
inicio
// Seção de Comandos
s<-0
den<-2
para i<-1 ate 99 faca
     fat_den<-1
     para j<-1 ate den faca
          fat_den<-fat_den*j
          fimpara
     se (i mod 2=0) entao
     s<-s-i/fat_den
     senao
     s<-s+i/fat_den
     fimse
     den<-den+2
fimpara
escreva("S = ",s)
fimalgoritmo
