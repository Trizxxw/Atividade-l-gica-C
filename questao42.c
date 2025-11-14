#include <stdio.h>
#include <math.h>

int main() {
    double X, A, S = 0.0, D1, D2, AT, N1, N2;
    int i;

    printf("Digite o valor de X: ");
    scanf("%lf", &X);
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    if (X == 0.0) {
        printf("Erro: X não pode ser zero, pois está no denominador da série.\n");
        return 1;
    }
    for (i = 1; i <= 20; i++) {
        N1 = (double)i;
        D1 = A - (i - 1);
        N2 = 21.0 - (double)i;
        D2 = pow(X, i);
        if (D1 == 0.0) {
            printf("Erro: Divisão por zero detectada no termo %d (A - %d = 0).\n", i, i-1);
            printf("O cálculo da série foi interrompido.\n");
            break;
        }
        AT = (N1 / D1) * (N2 / D2);
        S += AT;
    }
    printf("\nO valor da série S é: %.10f\n", S);
    return 0;
}
