#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario, tempo, salfinal;

    printf("Digite o seu sal�rio: ");
    scanf("%f", &salario);
    printf("Digite a quanto tempo voc� est� na empresa:");
    scanf("%f", &tempo);

    if(tempo >= 5){
        salfinal = salario + (salario * 0.20);

        printf("O seu sal�rio com o b�nus acrescido fica: %f", salfinal);
    }
    else{
        salfinal = salario + (salario * 0.10);

        printf("O seu sal�rio com o b�nus acrescido fica: %f", salfinal);
    }

}
