#include <stdio.h>

int main() {
    int vetor[10], i, soma = 0;
    float media;

    for (i = 0; i < 10; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = (float)soma / 10;
    printf("\n--- Resultados ---\n");
    printf("A media dos elementos e: %.2f\n", media);
    printf("Valores acima da media:\n");
    for (i = 0; i < 10; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
    return 0;
}
