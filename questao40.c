#include <stdio.h>

int main() {
    int K, N, i;
    long long resultado = 1;

    printf("Digite o valor da base (K): ");
    scanf("%d", &K);
    printf("Digite o valor do expoente (N): ");
    scanf("%d", &N);
    if (N == 0) {
        resultado = 1;
    } 
    else if (K == 0 && N > 0) {
        resultado = 0;
    }
    else {
        for (i = 1; i <= N; i++) {
            resultado = resultado * K;
        }
    }
    printf("\nO valor de %d elevado a %d (K^N) é: %lld\n", K, N, resultado);
    return 0;
}
