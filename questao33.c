#include <stdio.h>

int main() {
    int i, soma = 0, cont = 0;
    float media;

    for (i = 13; i <= 73; i++) {
        if (i % 2 == 0) {
            soma += i;
            cont++;
        }
    }
    media = (float) soma / cont;
    printf("A média dos números pares entre 13 e 73 é: %.2f\n", media);
    return 0;
}
