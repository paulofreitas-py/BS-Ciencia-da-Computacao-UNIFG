algoritmo "PRECO_VENDA"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função : calcular o preço de venda de um produto conforme o percentual.
// Autor : Renan Costa Alencar
// Data : 9/8/2007
// Seção de Declarações 
var
compra:real
venda:real
i:real
inicio
// Seção de Comandos
escreva("Digite o valor do produto: ")
leia(compra)
escreva("Digite o percentual de lucro desejado (em %): ")
leia(i)
venda<-compra*(1+(i/100))
escreva("O valor de venda do produto é de: ")
escreva(venda)
fimalgoritmo
