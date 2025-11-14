#include <stdio.h>

int main() {
    int N, C = 0;
    double S = 0.0, M;

    printf("Digite uma sequencia de numeros positivos.\n");
    printf("Para encerrar digite um numero negativo.\n");
    printf("Digite um numero: ");
    scanf("%d", &N);
    while (N >= 0) {
        S = S + N;
        C = C + 1;
        printf("Digite um numero: ");
        scanf("%d", &N);
    }
    printf("\n--- Resultado da Sequencia ---\n");
    if (C > 0) {
        M = S / C;
        printf("Quantidade de numeros lidos: %d\n", C);
        printf("Soma dos numeros: %.0f\n", S);
        printf("Media dos numeros: %.2f\n", M);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }
    return 0;
}
