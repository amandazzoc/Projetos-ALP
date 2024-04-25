#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float temp_fa, temp_ce;

    printf("Escreva a temperatura em Fahrenheit:");
    scanf("%f", &temp_fa);
    temp_ce = (temp_fa - 32) / 1.8;
    printf("A temperatura em Celcius e: %f°", temp_ce);
}
