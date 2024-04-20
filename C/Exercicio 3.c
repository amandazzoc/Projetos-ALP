#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int salario_usuario, qtd_salariomin;

    printf("Escreva o seu salario: ");
    scanf("%d", &salario_usuario);
    qtd_salariomin= salario_usuario/1320;
    printf("Voce recebe aproximadamente: %d salarios minimos", qtd_salariomin);

}

