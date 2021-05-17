Algoritmo "Ex5"
// Disciplina  :  [Fundamentos Para Computação]
// Professor   :
// Descrição   : Ler dois valores para as variáveis A e B, e efetuar as trocas dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.
// Data atual  : 18/05/2020
Var
// Seção de Declarações das variáveis 

a, b, troca: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva("Digite o valor(numérico) da variável A: ")

leia(a)

escreva("Digite o valor(numérico) da variável B: ")

leia(b)

     troca <- a

     a <- b

     b <- troca

     limpatela

     escreval("===========================")

     escreval("O novo valor de A é: ",a)

     escreval("O novo valor de B é: ",b)

     escreval("===========================")




Fimalgoritmo