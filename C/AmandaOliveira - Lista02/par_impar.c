#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número:");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O número é par");
    }
    else{
        printf("O número é impar");
    }
}
