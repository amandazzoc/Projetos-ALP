Algoritmo "Consumo de Combustivel"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Amanda de Oliveira Costa
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
ki: real
kf: real
cc: real
dp: real
gc: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Para calcular o consumo de combustível do seu automóvel em Km/L, escreva:")
escreval("A quilometragem inicial:")
leia(ki)
escreval("A quilometragem final:")
leia(kf)
escreval("O consumo de combustivel (n° de litros):")
leia(cc)

dp <- kf-ki
gc <- dp/cc
escreva("O consumo de combustível do seu automóvel em Km/L é:",gc)

Fimalgoritmo