#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int velocidade;
    float velocidade_metros;

    printf("Digite a velocidade em km/h: ");
    scanf("%d", &velocidade);
    velocidade_metros= velocidade*0.62;
    printf("A velocidade em m/h e: %f m/h", velocidade_metros);

}
