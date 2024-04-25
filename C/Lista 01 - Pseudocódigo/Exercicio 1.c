#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num, ant, suc;

    printf("Informe o numero:");
    scanf("%d", &num);
    ant= num-1;
    suc= num+1;
    printf("O antecessor do numero escolhido e: %d E o sucessor e: %d", ant, suc);

}
