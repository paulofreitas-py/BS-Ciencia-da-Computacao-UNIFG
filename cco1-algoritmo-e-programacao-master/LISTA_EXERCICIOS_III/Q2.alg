algoritmo "Q2_LISTA3"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função : digita dois numeros para servir de intervalo.
// Autor : Renan Costa Alencar
// Data : 18/8/2007
// Seção de Declarações 
var
a,b,i:inteiro
inicio
// Seção de Comandos
escreva("Digite dois numeros: ")
leia(a,b)
i<-0
para i<-a ate b faca
     se((i mod 2)<>0) entao
          escreva(i)
     fimse
fimpara
fimalgoritmo
