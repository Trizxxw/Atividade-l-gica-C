#include <stdio.h>

int main() {
    int i, n, D = 0, F = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &n);
        if (n >= 10 && n <= 50)
            D++;
        else
            F++;
    }
    printf("Quantidade dentro do intervalo [10,50]: %d\n", D);
    printf("Quantidade fora do intervalo [10,50]: %d\n", F);
    return 0;
}
