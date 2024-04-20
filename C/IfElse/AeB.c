int main(){
    int a, b;

    printf("Digite o valor para A:");
    scanf("%d", &a);
    printf("Digite o valor para B:");
    scanf("%d", &b);

    if(a > b){
        printf("A = %d", a);
    }
    else if(b > a){
        printf("B = %d", b);
    }
    else{
        printf("A = B = %d", a);
    }
}
