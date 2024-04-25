#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float ValEmprestimo, SalSol, valMaxParcelas;
    int numParcelas;

    printf("Digite o valor do empréstimo: ");
    scanf("%f", &ValEmprestimo);
    printf("Digite o número de parcelas: ");
    scanf("%d", &numParcelas);
    printf("Digite o salário do solicitante: ");
    scanf("%f", &SalSol);

    valMaxParcelas = 0.30 * SalSol / numParcelas;

    if(valMaxParcelas >= ValEmprestimo / numParcelas){
        printf("Empréstimo aprovado!");
    }
    else{
        printf("Empréstimo não aprovado!");
    }
}
