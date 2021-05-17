algoritmo "Q5_LISTA2"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função : verificar se o numero digitado eh impar ou par.
// Autor : Renan Costa Alencar
// Data : 18/8/2007
// Seção de Declarações 
var
x,y:inteiro
a,b:inteiro
inicio
// Seção de Comandos
escreva("Digite numero: ")
leia(x,y)
se (x<y) entao
   a<-x
   b<-y
   escreva(a,",",b)
senao
     b<-x
     a<-y
     escreva(a,",",b)
fimse
fimalgoritmo
