Algoritmo "Segundos"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Amanda de Oliveira Costa
// Data atual  : 05/04/2024
Var
// Se��o de Declara��es das vari�veis 
segundos: inteiro
hora: inteiro
segundos_restantes: inteiro
min: inteiro
seg_final: inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreval("Escreva os segundos:")
leia(segundos)

hora <- segundos\3600
segundos_restantes <- segundos%3600
min <- segundos_restantes\60
seg_final <- segundos_restantes%60

escreva("O total �: ",hora, " horas, ",min, " minutos, e ",seg_final, " segundos.")

Fimalgoritmo