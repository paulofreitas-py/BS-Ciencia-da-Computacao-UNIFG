algoritmo "CALCULAR_HIPOTENUSA"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função : Fazer o cálculo da hipotenusa
// Autor : Renan Costa Alencar
// Data : 15/9/2007
// Seção de Declarações 
var
c,b:real
h:real
inicio
// Seção de Comandos
h<-0
escreva("Escreva os catetos: ")
leia(c,b)
h<-raizq(exp(c,2)+exp(b,2))
escreva("Hipotenusa:",h)
fimalgoritmo
