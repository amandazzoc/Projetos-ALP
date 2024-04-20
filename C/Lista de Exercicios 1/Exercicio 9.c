#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int anos, meses, dias, idadedias;

    printf("Digite a sua idade:");
    scanf("%d", &anos);
    printf("Digite a quantidade de meses que voce tem:");
    scanf("%d", &meses);
    printf("Digite a quantidade de dias que voce tem:");
    scanf("%d", &dias);

    idadedias = (anos * 365)+(meses * 30) + dias;

    printf("Voce tem %d dias de vida", idadedias);
}
