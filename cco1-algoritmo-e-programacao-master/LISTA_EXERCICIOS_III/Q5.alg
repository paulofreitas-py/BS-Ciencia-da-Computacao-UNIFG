algoritmo "Q5_LISTA3"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função :
// Autor : Renan Costa Alencar
// Data : 20/8/2007
// Seção de Declarações 
var
n,menor_n,qtd_x:inteiro
inicio
// Seção de Comandos
escreva("Digite numero: ")
leia(n)
qtd_x<-0
menor_n<-n
enquanto n<>0 faca
         se (n=menor_n) entao
            qtd_x<-qtd_x+1
         senao
              se (n<menor_n) entao
                 menor_n<-n
                 qtd_x<-0
                 qtd_x<-qtd_x+1
              fimse
         fimse
         escreva("Digite numero: ")
         leia(n)
fimenquanto
escreval("menor numero e: ",menor_n)
escreval("Quantdade de vezes que o menor numero mudou: ",qtd_x)
fimalgoritmo
