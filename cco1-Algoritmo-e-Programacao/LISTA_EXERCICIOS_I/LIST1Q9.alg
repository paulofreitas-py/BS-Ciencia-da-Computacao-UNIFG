algoritmo "EXPERIENCIA_BIOLOGICA"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o : calcular o hor�rio de t�rmino de uma experi�ncia biologica.
// Autor : Renan Costa Alencar
// Data : 9/8/2007
// Se��o de Declara��es 
var
hinicio:inteiro
mininicio:inteiro
seginicio:inteiro
duracaoseg:inteiro
hfim,minfim,segfim:inteiro
hduracao,minduracao,segresto:inteiro
inicio
// Se��o de Comandos
escreva("Digite horas, minutos e segundos do in�cio da experi�ncia: ")
leia(hinicio,mininicio,seginicio)
escreva("Digite a duracao da experiencia em segundos: ")
leia(duracaoseg)
hduracao<-duracaoseg div 3600)
minduracao<-((duracaoseg mod 3600) div 60)
segresto<-((duracaoseg mod 3600) mod 60)
hfim<-hinicio+hduracao
minfim<-mininicio+minduracao
segfim<-seginicio+segresto
escreva("O termino da experiencia foi as: ")
escreva(hfim,":",minfim,":",segfim)
fimalgoritmo
