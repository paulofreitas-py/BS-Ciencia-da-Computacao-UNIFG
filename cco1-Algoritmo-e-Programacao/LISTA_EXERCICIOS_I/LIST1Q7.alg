algoritmo "ESPERA_FILA_BANCO"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função : calcular o tempo de espera na fila do banco.
// Autor : Renan Costa Alencar
// Data : 9/8/2007
// Seção de Declarações 
var
hentrada:inteiro
minentrada:inteiro
hsaida:inteiro
minsaida:inteiro
inicio
// Seção de Comandos
escreva("Digite a hora e os minutos da entrada na fila: ")
leia(hentrada,minentrada)
escreva("Digite a hora e os minutos da saida da fila: ")
leia(hsaida,minsaida)
escreva("O tempo de permanencia na fila foi de: ")
escreva((hsaida-hentrada),":",(minsaida-minentrada))
fimalgoritmo
