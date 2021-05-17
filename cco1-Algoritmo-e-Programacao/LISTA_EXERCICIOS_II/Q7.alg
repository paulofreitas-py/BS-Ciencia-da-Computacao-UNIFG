algoritmo "Q7_LISTA2"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função : verificar se o numero digitado eh impar ou par.
// Autor : Renan Costa Alencar
// Data : 18/8/2007
// Seção de Declarações 
var
a,b,c:real
inicio
// Seção de Comandos
escreva("Digite numero: ")
leia(a,b,c)
se (a<b+c) e (b<a+c) e (c<a+b) entao
   escreva(a,",",b," e",c," são lados de um triangulo.")
senao
     escreva(a,",",b," e",c," não são lados de um triangulo.")
fimse
fimalgoritmo
