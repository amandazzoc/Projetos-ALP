Algoritmo "Consumo de Combustivel"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Amanda de Oliveira Costa
// Data atual  : 05/04/2024
Var
// Se��o de Declara��es das vari�veis 
ki: real
kf: real
cc: real
dp: real
gc: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Para calcular o consumo de combust�vel do seu autom�vel em Km/L, escreva:")
escreval("A quilometragem inicial:")
leia(ki)
escreval("A quilometragem final:")
leia(kf)
escreval("O consumo de combustivel (n� de litros):")
leia(cc)

dp <- kf-ki
gc <- dp/cc
escreva("O consumo de combust�vel do seu autom�vel em Km/L �:",gc)

Fimalgoritmo