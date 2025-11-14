#include <stdio.h>

int main() {
    double x;
    double soma = 0.0;
    int n;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    for (n = 1; n <= 20; n++) {
        
        if (x == n) {
            printf("Erro: Divisão por zero no %dº termo (x = %d).\n", n, n);
            printf("O cálculo será interrompido.\n");
            break; 
        }
        soma = soma + (1.0 / (x - n));
    }
    printf("\nO resultado da soma dos termos é: %.6f\n", soma);
    return 0;
}
