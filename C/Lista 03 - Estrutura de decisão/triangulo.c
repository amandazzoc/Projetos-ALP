#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    printf("Digite o tamanho do lado A do tri�ngulo: ");
    scanf("%d", &a);
    printf("Digite o tamanho do lado B do tri�ngulo: ");
    scanf("%d", &b);
    printf("Digite o tamanho do lado C do tri�ngulo: ");
    scanf("%d", &c);

    if(a == b && b == c){
        printf("O tri�ngulo � equil�tero");
    }
    else if(a == b || b == c || a == c ){
        printf("O tri�ngulo � is�sceles");
    }
    else{
        printf("O tri�ngulo � escaleno");
    }
}
