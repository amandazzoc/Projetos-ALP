#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if(n1 > n2){
        printf("O maior numero e %d", n1);
    }
    else if(n2 > n1){
        printf("O maior numero e %d", n2);
    }
    else{
        printf("Os numeros sao iguais");
    }
}
