Algoritmo "Ex5"
// Disciplina  :  [Fundamentos Para Computa��o]
// Professor   :
// Descri��o   : Ler dois valores para as vari�veis A e B, e efetuar as trocas dos valores de forma que a vari�vel A passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. Apresentar os valores trocados.
// Data atual  : 18/05/2020
Var
// Se��o de Declara��es das vari�veis 

a, b, troca: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva("Digite o valor(num�rico) da vari�vel A: ")

leia(a)

escreva("Digite o valor(num�rico) da vari�vel B: ")

leia(b)

     troca <- a

     a <- b

     b <- troca

     limpatela

     escreval("===========================")

     escreval("O novo valor de A �: ",a)

     escreval("O novo valor de B �: ",b)

     escreval("===========================")




Fimalgoritmo