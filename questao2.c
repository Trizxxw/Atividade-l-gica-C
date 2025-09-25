#include <stdio.h>

int main(){
    int N, S, A;
    printf("Digite um número:");
    scanf ("%d", &N);
    S = N + 1;
    A = N - 1;
    printf ("O antecessor de %d é %d\n", N, A);
    printf("O sucessor de %d é %d", N, S);
    return 0;
}
