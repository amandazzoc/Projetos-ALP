#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    printf("Digite o n�mero 1:");
    scanf("%d", &num1);
    printf("Digite o n�mero 2:");
    scanf("%d", &num2);
    printf("Digite o n�mero 3:");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("O n�mero 1 (%d) � o maior", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("O n�mero 2 (%d) � o maior", num2);
    }
    else if(num3 > num1 && num3 > num2){
        printf("O n�mero 3 (%d) � o maior", num3);
    }
    else if(num1 == num2 && num1 > num3){
        printf("Os n�meros 1 e 2 (%d, %d) s�o os maiores", num1, num2);
    }
    else if(num1 == num3 && num1 > num2){
        printf("Os n�meros 1 e 3 (%d, %d) s�o os maiores", num1, num3);
    }
    else if(num2 == num3 && num2 > num1){
        printf("Os n�meros 2 e 3 (%d, %d) s�o os maiores", num2, num3);
    }
    else{
        printf("Os n�meros 1, 2 e 3 (%d, %d, %d) s�o iguais", num1, num2, num3);
    }

}
