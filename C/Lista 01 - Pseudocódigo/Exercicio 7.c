#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float ki, kf, cc, dp, gc;

    printf("Escreva a quilometragem inicial:");
    scanf("%f", &ki);
    printf("A quilometragem final:");
    scanf("%f", &kf);
    printf("O consumo de combustivel:");
    scanf("%f", &cc);
    dp = kf-ki;
    gc = dp/cc;
    printf("O consumo de combustivel do seu automovel em km/l e: %f", gc);
}

