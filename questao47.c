#include <stdio.h>

int main() {
    double h, pi;
    int s;

    printf("--- Peso Ideal ---\n");
    printf("Digite a altura em metros (ou um valor negativo para sair): ");
    scanf("%lf", &h);
    while (h >= 0) {
        printf("Digite o sexo (1: Feminino, 2: Masculino): ");
        scanf("%d", &s);
        if (s == 2) {
            pi = 72.7 * h - 58.0;
            printf("Peso ideal para Masculino (%.2fm): %.2f kg\n", h, pi);
        } else if (s == 1) {
            pi = 62.1 * h - 44.7;
            printf("Peso ideal para Feminino (%.2fm): %.2f kg\n", h, pi);
        } else {
            printf("Sexo invalido. Use 1 para Feminino e 2 para Masculino.\n");
        }
        printf("\nDigite a altura (h) em metros (ou um valor negativo para sair): ");
        scanf("%lf", &h);
    }
    printf("\nAlgoritmo encerrado.\n");
    return 0;
}
