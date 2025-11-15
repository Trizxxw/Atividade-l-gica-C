#include <stdio.h>

int main() {
    int vetor[10];
    int i = 0, soma = 0;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++) {
        soma = soma + vetor[i];
    }
    printf("A soma dos elementos do vetor é: %d\n", soma);
    return 0;
}
