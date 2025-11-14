#include <stdio.h>

int main() {
    int k, n, i;
    long long potencia_atual = 1;

    printf("Digite a base (k): ");
    scanf("%d", &k);
    printf("Digite o número de potências a calcular (n): ");
    scanf("%d", &n);
    printf("\nCalculando as %d primeiras potências de %d:\n", n, k);
    for (i = 1; i <= n; i++) {
        potencia_atual = potencia_atual * k; 
        printf("%d elevado a %d = %lld\n", k, i, potencia_atual);
    }
    return 0;
}
