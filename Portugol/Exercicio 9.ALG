Algoritmo "Idade"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Amanda de Oliveira Costa
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
anos: inteiro
meses: inteiro
dias: inteiro
idade_dias: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Para mostrar quanto dias de vida você tem, escreva:")
escreval("Quantos anos você tem:")
leia(anos)
escreval("Quantos meses voce tem:")
leia(meses)
escreval("Quantos dias voce tem:")
leia(dias)


idade_dias <- (anos*365)+(meses*30)+dias
escreva("Você tem ",idade_dias," de vida")

Fimalgoritmo