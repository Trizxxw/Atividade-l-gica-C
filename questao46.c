#include <stdio.h>

int main() {
    int n, i;
    long long f = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("\nO fatorial nao esta definido para numeros negativos.\n");
    } else {
        if (n == 0) {
            f = 1;
        } else {
            for (i = 1; i <= n; i++) {
                f = f * i;
            }
        }
        printf("\nO fatorial de %d (%d!) é: %lld\n", n, n, f);
    }
    return 0;
}
