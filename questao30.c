#include <stdio.h>

int main() {
    int i, idade, maiores = 0;

    for(i = 1; i <= 10; i++) {
        printf("Digite a idade da %dª pessoa: ", i);
        scanf("%d", &idade);
        if(idade >= 18)
            maiores++;
    }
    printf("Quantidade de pessoas maiores de idade: %d\n", maiores);
    return 0;
}
