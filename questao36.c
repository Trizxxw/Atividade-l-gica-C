#include <stdio.h>

int main() {
    float S = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        S += 1.0 / i;
    }
    printf("O valor de S é: %.4f\n", S);
    return 0;
}
