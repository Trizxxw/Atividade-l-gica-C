#include <stdio.h>

int main() {

    float H, maiorH, menorH, somaF, mediaF;
    int i, HO, M;

    maiorH = 0;
    menorH = 9999;
    somaF = 0;
    HO = 0;
    M = 0;

    for (i = 1; i <= 15; i++) {
        printf("Altura da pessoa %d: ", i);
        scanf("%f", &H);
        char S;
        printf("Sexo (M/F): ");
        scanf(" %c", &S);
        if (H > maiorH) maiorH = H;
        if (H < menorH) menorH = H;
        if (S == 'F' || S == 'f') {
            somaF += H;
            M++;
        } else if (S == 'M' || S == 'm') {
            HO++;
        }
    }
    if (M > 0) mediaF = somaF / M;
    else mediaF = 0;
    printf("\nMaior altura: %.2f\n", maiorH);
    printf("Menor altura: %.2f\n", menorH);
    printf("Media das mulheres: %.2f\n", mediaF);
    printf("Numero de homens: %d\n", HO);
    return 0;
}
