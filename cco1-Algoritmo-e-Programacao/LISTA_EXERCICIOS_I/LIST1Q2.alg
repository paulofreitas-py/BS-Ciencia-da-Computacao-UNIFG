algoritmo "VERIFICAR_EQUACAO"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o : Verificar se uma equa��o � do segundo grau
// Autor : Renan Costa Alencar
// Data : 15/9/2007
// Se��o de Declara��es 
var
a,b,c:real
x1,x2,delta:real
inicio
// Se��o de Comandos
escreva("Digite os coeficientes (a,b e c): ")
leia(a,b,c)
x1<-0
x2<-0
delta<-0
se (a=0) entao
   escreva("N�o � uma equa��o do segundo grau.")
senao
     //inicio
     delta<-(exp(b,2))-(4*a*c)
     se (delta<0) entao
        escreva("N�o h� raizes reais.")
     senao
          x1<-(-b+raizq(delta))/(2*a)
          x2<-(-b-raizq(delta))/(2*a)
     fimse
fimse
escreva("Raizes:",x1," e",x2)
fimalgoritmo
