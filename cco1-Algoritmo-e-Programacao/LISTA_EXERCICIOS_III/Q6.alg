algoritmo "Q5_LISTA3"
// Disciplina   : [Algoritmos e Programa��o] 
// Professor   : Renan Costa Alencar 
// Fun��o :
// Autor : Renan Costa Alencar
// Data : 20/8/2007
// Se��o de Declara��es 
var
salario,maior_s1,maior_s2,maior_s3:real
inicio
// Se��o de Comandos
escreva("Digite salario: ")
leia(salario)
maior_s1<-salario
maior_s2<-salario
maior_s3<-salario
enquanto salario<>0 faca
         se (salario>maior_s1) entao
            maior_s3<-maior_s2
            maior_s2<-maior_s1
            maior_s1<-salario
         fimse
         escreva("Digite numero: ")
         leia(salario)
 fimenquanto
 escreva("Os tres maiores salario sao: ",maior_s1,",",maior_s2,",",maior_s3)
fimalgoritmo
