#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario, tempo, salfinal;

    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    printf("Digite a quanto tempo você está na empresa:");
    scanf("%f", &tempo);

    if(tempo >= 5){
        salfinal = salario + (salario * 0.20);

        printf("O seu salário com o bônus acrescido fica: %f", salfinal);
    }
    else{
        salfinal = salario + (salario * 0.10);

        printf("O seu salário com o bônus acrescido fica: %f", salfinal);
    }

}
