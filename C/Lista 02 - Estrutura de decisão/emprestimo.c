#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float ValEmprestimo, SalSol, valMaxParcelas;
    int numParcelas;

    printf("Digite o valor do empr�stimo: ");
    scanf("%f", &ValEmprestimo);
    printf("Digite o n�mero de parcelas: ");
    scanf("%d", &numParcelas);
    printf("Digite o sal�rio do solicitante: ");
    scanf("%f", &SalSol);

    valMaxParcelas = 0.30 * SalSol / numParcelas;

    if(valMaxParcelas >= ValEmprestimo / numParcelas){
        printf("Empr�stimo aprovado!");
    }
    else{
        printf("Empr�stimo n�o aprovado!");
    }
}
