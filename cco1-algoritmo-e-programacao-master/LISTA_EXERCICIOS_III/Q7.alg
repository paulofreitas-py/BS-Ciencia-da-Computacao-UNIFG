algoritmo "Q7_LISTA3"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função :
// Autor : Renan Costa Alencar
// Data : 21/8/2007
// Seção de Declarações
var
nome,sexo:caracter
n1,n2,n3:real
faltas,qtd_t,qtd_r,qtd_m,qtd_h,qtd_hr,qtd_mr:inteiro
med_i,med_h,med_m,perc_h,perc_m,perc_t:real
inicio
// Seção de Comandos
escreva("Digite nome: ")
leia(nome)
med_h<-0
med_m<-0
perc_h<-0
perc_m<-0
perc_t<-0
qtd_t<-0
qtd_r<-0
qtd_m<-0
qtd_h<-0
enquanto nome<>"fim" faca
         med_i<-0
         escreva("Digite sexo (m ou f):")
         leia(sexo)
         escreva("Digite as tres notas:")
         leia(n1,n2,n3)
         escreva("Digite faltas:")
         leia(faltas)
         med_i<-(n1+n2+n3)/3
         qtd_t<-qtd_t+1
         se (med_i<6.0) e (faltas>12) entao
	         escreval(nome,med_i,faltas," Reprovado!")
	         qtd_r<-qtd_r+1
         senao
	           escreval(nome,med_i,faltas," Aprovado!")
         fimse
	      se (sexo="m") entao
	         //inicio
	         qtd_h<-qtd_h+1
	         med_h<-(med_h+med_i)/qtd_h	
            se (med_i<6.0) e (faltas>12) entao
		         qtd_hr<-qtd_hr+1
           fimse
         //fim
	      senao
              //inicio
              qtd_m<-qtd_m+1
              med_m<-(med_m+med_i)/qtd_m	
              se (med_i<6.0) ou (faltas>12) entao
              qtd_mr<-qtd_mr+1
              fimse
         fimse
         //fim
         escreva("Digite nome:")
         leia(nome)
fimenquanto
perc_h<-(qtd_hr/qtd_t)*100
perc_m<-(qtd_mr/qtd_t)*100
perc_t<-(qtd_r/qtd_t)*100
escreval("Media dos homens: ",med_h)
escreval("Media das mulheres: ",med_m)
escreval("Perct. homens reprovados: ",perc_h)
escreval("Perct. mulheres reprovadas: ",perc_m)
escreval("Perct. total: ",perc_t)
fimalgoritmo
