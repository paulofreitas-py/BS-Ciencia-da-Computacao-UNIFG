algoritmo "Q11_LISTA2"
// Disciplina   : [Algoritmos e Programação] 
// Professor   : Renan Costa Alencar 
// Função : Verificar a categoria de competência de acordo com a idade
// Autor : Renan Costa Alencar
// Data : 18/8/2007
// Seção de Declarações 
var
idade:inteiro
inicio
// Seção de Comandos
escreva("Digite a idade: ")
leia(idade)
se (idade>0) entao
   se (idade<=10) entao
   escreva("Nadador da classe Infantil.")
   senao
        se(idade>=11) e (idade<=15) entao
        escreva("Nadador da classe Infato.")
        senao
             se(idade>=16) e (idade<=18) entao
             escreva("Nadador da classe Juvenil.")
             senao
             escreva("Nadador da classe Adulto.")
             fimse
        fimse
   fimse
senao
escreva("Idade não existe.")
fimse
fimalgoritmo
