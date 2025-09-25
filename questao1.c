#include <stdio.h>

int main(){
    int n1, n2, resul;
    
    printf("Digite um número: ");
    scanf ("%d", &n1);
    printf ("Digite outro número: ");
    scanf ("%d", &n2);
    resul = n1*n2;
    printf ("O resultado da multiplicação entre %d e %d é igual a: %d\n", n1, n2, resul);

    return 0;
}
