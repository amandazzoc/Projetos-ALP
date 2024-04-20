#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int alt;
    float raio, vol;

    printf("Raio do cilindro: ");
    scanf("%f", &raio);
    printf("Altura do cilindro:");
    scanf("%d", &alt);
    vol = 3.14 * pow(raio, 2) * alt;
    printf("O volume do cilindro e: %f", vol);
}
