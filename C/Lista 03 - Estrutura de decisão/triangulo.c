#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    printf("Digite o tamanho do lado A do triângulo: ");
    scanf("%d", &a);
    printf("Digite o tamanho do lado B do triângulo: ");
    scanf("%d", &b);
    printf("Digite o tamanho do lado C do triângulo: ");
    scanf("%d", &c);

    if(a == b && b == c){
        printf("O triângulo é equilátero");
    }
    else if(a == b || b == c || a == c ){
        printf("O triângulo é isósceles");
    }
    else{
        printf("O triângulo é escaleno");
    }
}
