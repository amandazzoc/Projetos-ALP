#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int comp, larg, alt, vol;

    printf("Digite o comprimento da caixa:");
    scanf("%d", &comp);
    printf("Digite a largura da caixa:");
    scanf("%d", &larg);
    printf("DIgite a altura da caixa:");
    scanf("%d", &alt);
    vol = comp * alt * larg;
    printf("O volume da caixa é: %d", vol);
}
