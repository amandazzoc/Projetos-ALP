Algoritmo "Volume Cilindro"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Amanda de Oliveira Costa
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
raio: real
altura: inteiro
volume: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Para calcular o volume do cilindro, escreva:")
escreval("O raio:")
leia(raio)
escreval("A altura:")
leia(altura)

volume <- 3.14*raio^2*altura
escreva("O volume do cilindro é:",volume)

Fimalgoritmo