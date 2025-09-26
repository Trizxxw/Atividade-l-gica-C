#include <stdio.h>

int main(){
    int N1, N2, N3, M;
    
    printf("Digite o 1º número: ");
    scanf("%d", &N1);
     printf("Digite o 2º número: ");
    scanf("%d", &N2);
     printf("Digite o 3º número: ");
    scanf("%d", &N3);
    M = N1;
    if (N2 > M)
        M = N2;
    if (N3 > M)
        M = N3;
    printf ("O maior número é: %d\n", M);
    return 0;
}
