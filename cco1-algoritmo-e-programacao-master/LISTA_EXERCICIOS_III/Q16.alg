algoritmo "Q16"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função :
// Autor : Renan Costa Alencar
// Data : 20/8/2007
// Seção de Declarações 
var
esqmin,esqcod,qtd_cod:inteiro
cod:caracter
desc:caracter
inicio
// Seção de Comandos
escreva("Digite codigo: ")
leia(cod)
qtd_cod<-0
enquanto cod<>"0" faca
escreva("Digite descricao: ")
leia(desc)
escreva("Digite estoque minimo: ")
leia(esqmin)
escreva("Digite o estoque atual: ")
leia(esqcod)
qtd_cod<-qtd_cod+1
escreva("Digite codigo: ")
leia(cod)
fimenquanto
se (esqcod<esqmin) entao
escreva("Estoque abaixo do mínimo.",esqcod)
fimse
escreva(cod," | ",desc," | ",esqcod)
fimalgoritmo
