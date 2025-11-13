#include <stdio.h>

int main() {
    float c, f;

    printf("Tabela de conversão Celsius -> Fahrenheit\n");
    printf("------------------------------------------\n");
    printf("Celsius\tFahrenheit\n");
    for(c = 50; c <= 65; c++) {
        f = (c * 9 / 5) + 32;
        printf("%.1f\t%.1f\n", c, f);
    }
    return 0;
}
