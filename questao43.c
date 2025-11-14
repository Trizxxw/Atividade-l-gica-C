#include <stdio.h>

int main() {
    double MI, MA;
    int S = 0, V = 50;

    printf("Digite a massa inicial do material radioativo (em gramas): ");
    scanf("%lf", &MI);
    MA = MI;
    if (MI <= 0.5) {
        printf("\nO material ja esta abaixo ou igual a 0.5 gramas. Tempo necessario: 0 segundos.\n");
    } else {
        while (MA >= 0.5) {
            MA = MA / 2.0;
            S += V;
        }
        printf("\n--- Resultado do Decaimento ---\n");
        printf("Massa inicial: %.2f gramas\n", MI);
        printf("Massa final (menor que 0.5g): %.10f gramas\n", MA);
        printf("Tempo total necessario: %d segundos\n", S);
        printf("------------------------------\n");
    }
    return 0;
}
