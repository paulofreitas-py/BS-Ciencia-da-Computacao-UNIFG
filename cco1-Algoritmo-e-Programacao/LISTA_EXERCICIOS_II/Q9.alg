algoritmo "semnome"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o :
// Autor :
// Data : 15/9/2007
// Se��o de Declara��es 
var
a,b,c:inteiro
m1,m2,m3:inteiro
inicio
// Se��o de Comandos
escreva("Digite tres numeros:")
leia(a,b,c)
se (a<b) e (b<c) entao
   escreva(a,b,c)
senao
     se (b<a) e (a<c) entao
        escreva(b,a,c)
     senao
          se (b<c) e (c<a)entao
          escreva(b,c,a)
          senao
               se (c<b) e (b<a) entao
               escreva(c,b,a)
               senao
                    se (a<c) e (c<b) entao
                    escreva(a,c,b)
                    senao
                         escreva(c,a,b)
                    fimse
               fimse
          fimse
     fimse
fimse
fimalgoritmo
