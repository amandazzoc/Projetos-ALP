#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cod = 0;

    printf("Digite o c�digo do produto:");
    scanf("%d", &cod);

    switch(cod)
    {
        case 1:
            printf("Alimento N�o-perec�vel");
            break;
        case 2:
            printf("Alimento Perec�vel");
            break;
        case 3:
            printf("Alimento Perec�vel");
            break;
        case 4:
            printf("Alimento Perec�vel");
            break;
        case 5:
            printf("Vestu�rio");
            break;
        case 6:
            printf("Vestu�rio");
            break;
        case 7:
            printf("Higiene Pessoal");
            break;
        case 8:
            printf("Utens�lios Dom�sticos");
            break;
        case 9:
            printf("Utens�lios Dom�sticos");
            break;
        case 10:
            printf("Utens�lios Dom�sticos");
            break;
        default:
            printf("C�digo Inv�lido");
            break;
    }
}
