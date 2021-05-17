algoritmo "Q17"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função :
// Autor : Renan Costa Alencar
// Data : 16/9/2007
// Seção de Declarações 
var
cad_a,cad_b:caracter
zona,sec,qtd_a,qtd_b,votos_a,votos_b:inteiro
perc_a,perc_b:real
inicio
// Seção de Comandos
escreva("Digite o nome dos dois candidatos: ")
leia(cad_a,cad_b)
escreva("Digite a zona: ")
leia(zona)
qtd_a<-0
qtd_b<-0
enquanto zona>0 faca
                 escreva("Digite secção: ")
                 leia(sec)
                 enquanto (sec>0) faca
                          escreva("Digite os votos de ",cad_a,": ")
                          leia(votos_a)
                          escreva("Digite os votos de ",cad_b,": ")
                          leia(votos_b)
                          escreva("Digite secção: ")
                          leia(sec)
                          qtd_a<-qtd_a+votos_a
                          qtd_b<-qtd_b+votos_b
                 fimenquanto
                 escreva("Digite zona: ")
                 leia(zona)
fimenquanto
perc_a<-(qtd_a/(qtd_a+qtd_b))*100
perc_b<-(qtd_b/(qtd_a+qtd_b))*100
escreval("Candidato ",cad_a,"teve ",perc_a,"% de votos.")
escreval("Candidato ",cad_b,"teve ",perc_b,"% de votos.")
fimalgoritmo
