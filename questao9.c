#include <stdio.h>

int main(){
    int A, B, C;
    
    printf("Valor de A: ");
    scanf ("%d", &A);
    printf("Valor de B: ");
    scanf("%d", &B);
    C = A;
    A = B;
    B = C;
    printf("O valor de A agora é: %d\n", A);
    printf ("O valor de B agora é: %d", B);
    return 0;
}
