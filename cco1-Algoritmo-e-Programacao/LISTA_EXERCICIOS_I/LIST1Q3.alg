algoritmo "CALCULAR_HIPOTENUSA"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o : Fazer o c�lculo da hipotenusa
// Autor : Renan Costa Alencar
// Data : 15/9/2007
// Se��o de Declara��es 
var
c,b:real
h:real
inicio
// Se��o de Comandos
h<-0
escreva("Escreva os catetos: ")
leia(c,b)
h<-raizq(exp(c,2)+exp(b,2))
escreva("Hipotenusa:",h)
fimalgoritmo
