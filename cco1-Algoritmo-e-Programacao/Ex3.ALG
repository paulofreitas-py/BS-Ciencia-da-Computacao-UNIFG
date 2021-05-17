Algoritmo "Ex3"
// Disciplina  :  [Fundamentos Para Computação]
// Professor   :
// Descrição   : Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o seu nome, o salário fixo e salário no final do mês.
// Autor(a)    : Paulo Freitas
// Data atual  : 18/05/2020
Var
// Seção de Declarações das variáveis 

     nome: caractere

     salario: real

     vendas: real

     comissao: real

     salarioFinal: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreval("<><><><><> Sistema de gestão de vendedores <><><><><>")

     escreva(">>> Digite o nome do vendedor: ")

     leia(nome)

     escreva(">>> Digite o salário: ")

     leia(salario)

     escreva(">>> Informe a quantidade de vendas deste no mês: ")

     leia(vendas)

     // Cálculo da comissão e salário final

     comissao <- 0.15 * vendas

     salarioFinal <- salario + comissao

     limpatela

     escreval(">>>>>>>>>> RESUMO <<<<<<<<<<")

     escreval("-- Nome: ",nome)

     escreval("-- Salário: ",salario)

     escreval("-- Salário Final (salário + comissão): ",salarioFinal)

     escreval(">>>>>>>>>><><><><><<<<<<<<<<")




Fimalgoritmo