Algoritmo "Volume Cilindro"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Amanda de Oliveira Costa
// Data atual  : 05/04/2024
Var
// Se��o de Declara��es das vari�veis 
raio: real
altura: inteiro
volume: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Para calcular o volume do cilindro, escreva:")
escreval("O raio:")
leia(raio)
escreval("A altura:")
leia(altura)

volume <- 3.14*raio^2*altura
escreva("O volume do cilindro �:",volume)

Fimalgoritmo