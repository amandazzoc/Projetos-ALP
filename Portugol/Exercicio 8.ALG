Algoritmo "Autope�as"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Amanda de Oliveira Costa
// Data atual  : 05/04/2024
Var
// Se��o de Declara��es das vari�veis
ipi: inteiro
cod_pecaum: inteiro
valor_pecaum: real
qtd_pecaum: inteiro
cod_pecadois: inteiro
valor_pecadois: real
qtd_pecadois: inteiro
valor_total: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc...
escreval("Para te ajudar a comprar as pe�as, escreva:")
escreval("A porcentagem do IPI a ser acrescentado:")
leia(ipi)
escreval("O c�digo da pe�a 1:")
leia(cod_pecaum)
escreval("O valor unit�rio da pe�a 1:")
leia(valor_pecaum)
escreval("A quantidade de pe�as 1:")
leia(qtd_pecaum)
escreval("O c�digo da pe�a 2:")
leia(cod_pecadois)
escreval("O valor unit�rio da pe�a 2:")
leia(valor_pecadois)
escreval("A quantidade de pe�as 2:")
leia(qtd_pecadois)

valor_total <- ((valor_pecaum*qtd_pecaum)+(valor_pecadois*qtd_pecadois))*((ipi/100)+1)
escreva("O valor total a ser pago �: R$",valor_total)

Fimalgoritmo