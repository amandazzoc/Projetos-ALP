#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    printf("Digite o número 1:");
    scanf("%d", &num1);
    printf("Digite o número 2:");
    scanf("%d", &num2);
    printf("Digite o número 3:");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("O número 1 (%d) é o maior", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("O número 2 (%d) é o maior", num2);
    }
    else if(num3 > num1 && num3 > num2){
        printf("O número 3 (%d) é o maior", num3);
    }
    else if(num1 == num2 && num1 > num3){
        printf("Os números 1 e 2 (%d, %d) são os maiores", num1, num2);
    }
    else if(num1 == num3 && num1 > num2){
        printf("Os números 1 e 3 (%d, %d) são os maiores", num1, num3);
    }
    else if(num2 == num3 && num2 > num1){
        printf("Os números 2 e 3 (%d, %d) são os maiores", num2, num3);
    }
    else{
        printf("Os números 1, 2 e 3 (%d, %d, %d) são iguais", num1, num2, num3);
    }

}
