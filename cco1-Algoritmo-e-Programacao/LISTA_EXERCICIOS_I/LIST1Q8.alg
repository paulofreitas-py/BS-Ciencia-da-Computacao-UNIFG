algoritmo "CONTA_BANCARIA"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função : Simula o funcionamento de um caixa eletrônico
// Autor : Renan Costa Alencar
// Data : 15/9/2007
// Seção de Declarações 
var
valor,n100,n50,n20,n10,n5,n1,rest_0,rest_1,rest_2,rest_3,rest_4:inteiro
inicio
escreva("Digite o valor do saque:")
leia(valor)
n100<-valor div 100
rest_0<-valor mod 100
n50<-rest_0 div 50
rest_1<-rest_0 mod 50
n20<-rest_1 div 20
rest_2<-rest_1 mod 20
n10<-rest_2 div 10
rest_3<-rest_2 mod 10
n5<-rest_3 div 5
rest_4<-rest_3 mod 5
n1<- rest_4
escreval("Este valor será dividido em ",n100,", nota(s) de R$100, ")
escreval(n50,", nota(s) de R$50, ",n20,", nota(s) de R$20, ")
escreval(n10,", nota(s) de R $10, ",n5,", nota(s) de R$5 e ")
escreval(n1,", nota(s) de R$1.")
fimalgoritmo
