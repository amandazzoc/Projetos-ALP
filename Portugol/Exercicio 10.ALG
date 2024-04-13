Algoritmo "Segundos"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Amanda de Oliveira Costa
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
segundos: inteiro
hora: inteiro
segundos_restantes: inteiro
min: inteiro
seg_final: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Escreva os segundos:")
leia(segundos)

hora <- segundos\3600
segundos_restantes <- segundos%3600
min <- segundos_restantes\60
seg_final <- segundos_restantes%60

escreva("O total é: ",hora, " horas, ",min, " minutos, e ",seg_final, " segundos.")

Fimalgoritmo