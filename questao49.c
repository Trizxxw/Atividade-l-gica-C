#include <stdio.h>

int main() {
    float s = 0.0, somas = 0.0, maiors = 0.0;
    int F = 0, somaf = 0,P = 0, PS = 0;

    printf("--- Pesquisa de Habitantes ---\n");
    printf("Digite um salario negativo para encerrar a pesquisa.\n\n");
    while (1) {
        printf("Digite o salario (R$): ");
        scanf("%f", &s);
        if (s < 0) {
            break;
        }
        printf("Digite o numero de filhos: ");
        scanf("%d", &F);
        somas += s;
        somaf += F;
        P++;
        if (s > maiors) {
            maiors = s;
        }
        if (s <= 1000.00) {
            PS++;
        }
        printf("---\n");
    }
    printf("\n\n--- Resultados da Pesquisa ---\n");
    if (P > 0) {
        float MS = somas / P;
        float MF = (float)somaf / P;
        float PO = ((float)PS / P) * 100.0;
        printf("a) Media do salario da populacao: R$ %.2f\n", MS);
        printf("b) Media do numero de filhos: %.2f\n", MF);
        printf("c) O maior salario encontrado: R$ %.2f\n", maiors);
        printf("d) Porcentagem de pessoas com salarios ate R$1000,00: %.2f%%\n", PO);
    } else {
        printf("Nenhum dado valido foi inserido na pesquisa.\n");
    }
    return 0;
}
