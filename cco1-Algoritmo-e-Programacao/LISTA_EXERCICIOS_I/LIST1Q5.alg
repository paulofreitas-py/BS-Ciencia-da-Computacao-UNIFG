algoritmo "PRECO_VENDA"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o : calcular o pre�o de venda de um produto conforme o percentual.
// Autor : Renan Costa Alencar
// Data : 9/8/2007
// Se��o de Declara��es 
var
compra:real
venda:real
i:real
inicio
// Se��o de Comandos
escreva("Digite o valor do produto: ")
leia(compra)
escreva("Digite o percentual de lucro desejado (em %): ")
leia(i)
venda<-compra*(1+(i/100))
escreva("O valor de venda do produto � de: ")
escreva(venda)
fimalgoritmo
