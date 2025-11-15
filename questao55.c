#include <stdio.h>

int main() {
    int vetor[10], i;

    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            vetor[i] = vetor[i] * 5;
        }
    }
    printf("\nVetor apos a multiplicacao por 5 nas posicoes impares:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
