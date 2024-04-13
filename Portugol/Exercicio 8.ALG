Algoritmo "Autopeças"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Amanda de Oliveira Costa
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
ipi: inteiro
cod_pecaum: inteiro
valor_pecaum: inteiro
qtd_pecaum: inteiro
cod_pecadois: inteiro
valor_pecadois: inteiro
qtd_pecadois: inteiro
valor_total: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Para te ajudar a comprar as peças, escreva:")
escreval("A porcentagem do IPI a ser acrescentado:")
leia(ipi)
escreval("O código da peça 1:")
leia(cod_pecaum)
escreval("O valor unitário da peça 1:")
leia(valor_pecaum)
escreval("A quantidade de peças 1:")
leia(qtd_pecaum)
escreval("O código da peça 2:")
leia(cod_pecadois)
escreval("O valor unitário da peça 2:")
leia(valor_pecadois)
escreval("A quantidade de peças 2:")
leia(qtd_pecadois)


valor_total <- ((valor_pecaum*qtd_pecaum)+(valor_pecadois*qtd_pecadois))*((ipi/100)+1)
escreva("O valor total a ser pago é: R$",valor_total)

Fimalgoritmo