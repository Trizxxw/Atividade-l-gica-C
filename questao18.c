#include <stdio.h>

int main(){
    int M;
    float P, T;
    
    printf("Quantidade de maçãs: ");
    scanf("%d", &M);
    if (M < 12)
        P = 0.30;
    else
        P = 0.25;
    T = M * P;
    printf("Valor total: R$ %.2f", T);
    return 0;
}
