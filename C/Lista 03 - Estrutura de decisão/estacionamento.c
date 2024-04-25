#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int pag, he, me, hs, ms, duracao;

    printf("Digite a hora de entrada no estacionamento:");
    scanf("%d", &he);
    printf("Minuto da entrada:");
    scanf("%d", &me);
    printf("Digite a hora de saída no estacionamento:");
    scanf("%d", &hs);
    printf("Minuto da saída:");
    scanf("%d", &ms);

    duracao = (hs - he) * 60 + (ms - me);

    if(duracao <= 60){
        pag = 4;
    }
    else if(duracao <= 120){
        pag = 6;
    }
    else{
        pag = 6 + (duracao - 120) / 60;
    }

    printf("O valor do estacionamento é de: R$%d", pag);
}
