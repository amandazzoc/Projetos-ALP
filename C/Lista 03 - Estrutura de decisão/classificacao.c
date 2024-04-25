#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cod = 0;

    printf("Digite o código do produto:");
    scanf("%d", &cod);

    switch(cod)
    {
        case 1:
            printf("Alimento Não-perecível");
            break;
        case 2:
            printf("Alimento Perecível");
            break;
        case 3:
            printf("Alimento Perecível");
            break;
        case 4:
            printf("Alimento Perecível");
            break;
        case 5:
            printf("Vestuário");
            break;
        case 6:
            printf("Vestuário");
            break;
        case 7:
            printf("Higiene Pessoal");
            break;
        case 8:
            printf("Utensílios Domésticos");
            break;
        case 9:
            printf("Utensílios Domésticos");
            break;
        case 10:
            printf("Utensílios Domésticos");
            break;
        default:
            printf("Código Inválido");
            break;
    }
}
