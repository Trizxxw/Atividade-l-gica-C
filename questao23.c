#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, x1, x2;

    printf("Digite o coeficiente A: ");
    scanf("%f", &a);
    printf("Digite o coeficiente B: ");
    scanf("%f", &b);
    printf("Digite o coeficiente C: ");
    scanf("%f", &c);

    D = b * b - 4 * a * c;

    if (D < 0) {
        printf("Não há raízes reais.\n");
    } else if (D == 0) {
        x1 = -b / (2 * a);
        printf("Raízes iguais: x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Raízes diferentes: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}
