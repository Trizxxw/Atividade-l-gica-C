#include <stdio.h>

int main() {
    int N1, N2, OP;
    float R;

    printf("Digite o primeiro número (N1): ");
    scanf("%d", &N1);
    printf("Digite o segundo número (N2): ");
    scanf("%d", &N2);
    printf("Digite a operação: ");
    printf("1-> SOMA 2-> SUBTRAÇÃO 3-> DIVISÃO 4-> MULTIPLICAÇÃO:\n");
    scanf("%d", &OP);
    switch (OP) {
        case 1:
            R = N1 + N2;
            printf("Resultado: %.2f\n", R);
            break;
        case 2:
            R = N1 - N2;
            printf("Resultado: %.2f\n", R);
            break;
        case 3:
            if (N2 != 0) {
                R = (float) N1 / N2;
                printf("Resultado: %.2f\n", R);
            } else {
                printf("Erro: divisão por zero\n");
            }
            break;
        case 4:
            R = N1 * N2;
            printf("Resultado: %.2f\n", R);
            break;
    }

    return 0;
}
