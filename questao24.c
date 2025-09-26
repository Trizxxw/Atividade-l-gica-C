#include <stdio.h>

int main() {
    char CLS;
    float C, T, VF, ICMS, VP;

    printf("Digite a classe consumidora (A, B ou C): ");
    scanf(" %c", &CLS);
    printf("Digite o consumo em KWh: ");
    scanf("%f", &C);
    if (CLS == 'A' || CLS == 'a')
        T = 0.5;
    else if (CLS == 'B' || CLS == 'b')
        T = 0.8;
    else if (CLS == 'C' || CLS == 'c')
        T = 1.0;
    else
        return 1;
    VF = C * T;
    ICMS = 0.3 * VF;
    VP = VF + ICMS;
    printf("Valor a pagar: R$ %.2f\n", VP);

    return 0;
}
