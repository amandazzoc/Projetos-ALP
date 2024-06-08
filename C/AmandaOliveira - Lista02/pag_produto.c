#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cp = 0;
    float pe, vt;

    printf("Digite o preço da etiqueta: ");
    scanf("%f", &pe);
    printf("Digite o código da condição de pagamento: ");
    scanf("%d", &cp);

    switch(cp){
        case 1:
            vt = pe * 0.9;
            printf("O pagamento é á vista em dinheiro ou cheque, com 10 por cento de desconto. Valor total: R$%.2f", vt);
            break;
        case 2:
            vt = pe * 0.95;
            printf("O pagamento é á vista com cartão de crédito, com 5 por cento de desconto. Valor total: R$%.2f", vt);
            break;
        case 3:
            vt = pe / 2;
            printf("O pagamento é em 2 vezes sem juros. Valor da parcela: R$%.2f", vt);
            break;
        case 4:
            vt = pe * 1.1 / 3;
            printf("O pagamento é em 3 vezes sem juros. Valor da parcela: R$%.2f", vt);
            break;
        default:
            printf("Condição de pagamento inválida.\n");
            break;
    }

    return 0;
}
