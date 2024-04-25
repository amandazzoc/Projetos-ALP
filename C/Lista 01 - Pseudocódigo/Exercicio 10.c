#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int seg, hor, seg_res, min, seg_fin;

    printf("Escreva os segundos:");
    scanf("%d", &seg);

    hor = seg / 3600;
    seg_res = seg % 3600;
    min = seg_res / 60;
    seg_fin = seg_res % 60;

    printf("O total é: %d horas, %d minutos, e %d segundos.", hor, min, seg_fin);
}
