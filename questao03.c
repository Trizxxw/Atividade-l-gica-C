#include <stdio.h>

int main(){
    int X, Y, RST;
    float  RSL;
    
    printf ("Digite o valor de X:");
    scanf ("%d" ,  &X);
    printf ("Digite o valor de Y:");
    scanf("%d", &Y);
    RSL = (float) X/Y;
    RST = X%Y;
    printf ("O resultado da divisão entre %d e %d é igual a: %.2f\n", X, Y, RSL);
    printf("O resto da divisão entre %d e %d é igual a: %d\n", X, Y, RST);
    return 0;
}
