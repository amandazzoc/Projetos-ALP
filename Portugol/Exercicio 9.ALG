Algoritmo "Idade"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Amanda de Oliveira Costa
// Data atual  : 05/04/2024
Var
// Se��o de Declara��es das vari�veis 
anos: inteiro
meses: inteiro
dias: inteiro
idade_dias: inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Para mostrar quanto dias de vida voc� tem, escreva:")
escreval("Quantos anos voc� tem:")
leia(anos)
escreval("Quantos meses voce tem:")
leia(meses)
escreval("Quantos dias voce tem:")
leia(dias)


idade_dias <- (anos*365)+(meses*30)+dias
escreva("Voc� tem ",idade_dias," de vida")

Fimalgoritmo