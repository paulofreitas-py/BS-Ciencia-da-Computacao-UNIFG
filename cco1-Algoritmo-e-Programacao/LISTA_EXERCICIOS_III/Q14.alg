algoritmo "Q14_LISTA3"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função :
// Autor : Renan Costa Alencar
// Data : 20/8/2007
// Seção de Declarações 
var
n,i,j,mmc:inteiro
inicio
// Seção de Comandos
escreva("digite a quant.d de termos: ")
leia(n)
mmc<-0
para i<-1 ate n faca
         para j<-1 ate i faca
              se (i mod j=0) entao
                 mmc<-mmc+1
              fimse
         fimpara
              se (mmc<=2) entao
                 escreva(i)
              fimse
         mmc<-0
fimpara
fimalgoritmo
