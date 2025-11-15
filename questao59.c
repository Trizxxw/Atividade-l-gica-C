#include <stdio.h>

int main() {
    int V[10], i, maior, posicao;

    printf("--- Vetor V ---\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o elemento V[%d]: ", i);
        scanf("%d", &V[i]);
    }
    maior = V[0];
    posicao = 0;
    for (i = 1; i < 10; i++) {
        if (V[i] > maior) {
            maior = V[i];
            posicao = i;
        }
    }
    printf(" maior elemento e: %d\n", maior);
    printf("ocupa a posicao de (indice): %d\n", posicao);
    return 0;
}
