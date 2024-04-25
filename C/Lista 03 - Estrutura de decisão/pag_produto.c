#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cp = 0;
    float pe, vt;

    printf("Digite o pre�o da etiqueta: ");
    scanf("%f", &pe);
    printf("Digite o c�digo da condi��o de pagamento: ");
    scanf("%d", &cp);

    switch(cp){
        case 1:
            vt = pe - (pe * 0.10);
            printf("O pagamento � � vista em dinheiro ou cheque, com 10 por cento de desconto. Valor total: R$%.2f\n", vt);
            break;
        case 2:
            vt = pe - (pe * 0.05);
            printf("O pagamento � � vista com cart�o de cr�dito, com 5 por cento de desconto. Valor total: R$%.2f\n", vt);
            break;
        case 3:
            vt = pe / 2;
            printf("O pagamento � em 2 vezes sem juros. Valor da parcela: R$%.2f\n", vt);
            break;
        case 4:
            vt = pe / 3;
            printf("O pagamento � em 3 vezes sem juros. Valor da parcela: R$%.2f\n", vt);
            break;
        default:
            printf("Condi��o de pagamento inv�lida.\n");
            break;
    }

    return 0;
}
