#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int ipi, cod_pecaum, qtd_pecaum, cod_pecadois, qtd_pecadois;
    float valor_pecaum, valor_pecadois, valor_total;

    printf("Porcentagem do IPI a ser acrescentado:");
    scanf("%d", &ipi);
    printf("O codigo da peca 1:");
    scanf("%d", &cod_pecaum);
    printf("O valor unitario da peca 1:");
    scanf("%f", &valor_pecaum);
    printf("A quantidade de pecas 1:");
    scanf("%d", &qtd_pecaum);
    printf("O codigo da peca 2:");
    scanf("%d", &cod_pecadois);
    printf("O valor unitario da peca 2:");
    scanf("%f", &valor_pecadois);
    printf("A quantidade de pecas 2:");
    scanf("%d", &qtd_pecadois);

    valor_total = ((valor_pecaum * qtd_pecaum)+(valor_pecadois * qtd_pecadois)) * ((ipi / 100.0) + 1);
    printf("O valor total a ser pago e: R$ %f", valor_total);
}
