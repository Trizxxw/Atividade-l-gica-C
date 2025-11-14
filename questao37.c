#include <stdio.h>

int main() {
    float S = 0;
    int n = 1, d;

    for (d = 1; d <= 50; d++) {
        S += (float)n / d;
        n += 2;
    }
    printf("O valor de S é: %.4f\n", S);
    return 0;
}
