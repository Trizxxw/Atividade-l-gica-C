#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o 1º lado do triângulo: ");
    scanf("%d", &a);
    printf("Digite o 2º lado do triângulo: ");
    scanf("%d", &b);
    printf("Digite o 3º lado do triângulo: ");
    scanf("%d", &c);
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c)
            printf("Triângulo Equilátero\n");
        else if (a == b || a == c || b == c)
            printf("Triângulo Isósceles\n");
        else
            printf("Triângulo Escaleno\n");
    } else {
        printf("Os valores não formam um triângulo\n");
    }

    return 0;
}
