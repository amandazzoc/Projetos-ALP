#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int media, nota1, nota2;

    printf("Digite a nota 1:");
    scanf("%d", &nota1);
    printf("Digite a nota 2:");
    scanf("%d", &nota2);

    media = (nota1+nota2)/2;
    if (media >= 7){
        printf("Você foi aprovado!");
    }
    else{
        printf("Você foi reprovado!");
    }

}
