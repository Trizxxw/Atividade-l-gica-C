#include <stdio.h>

int main() {
    int n, maior, i;

    printf("Digite o 1º número: ");
    scanf("%d", &n);
    maior = n;
    for (i = 2; i <= 20; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &n);
        if (n > maior)
            maior = n;
    }
    printf("O maior número digitado foi: %d\n", maior);
    return 0;
}
