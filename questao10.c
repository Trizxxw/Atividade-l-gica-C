#include <stdio.h>

int main(){
    int v, n200, n100, n50, n20, n10, n5, n2;
    
    printf("---CAIXA ELETRÔNICO---\n");
    printf("Digite o valor do saque: ");
    scanf("%d", &v);
    n200 = v / 200;
    v = v % 200;
    n100 = v / 100;
    v = v % 100;
    n50 = v / 50;
    v = v % 50;
    n20 = v / 20;
    v = v % 20;
    n10 = v / 10;
    v = v % 10;
    n5 = v / 5;
    v = v % 5;
    n2 = v / 2;
    v = v % 2;
    printf("Notas de 200: %d\n", n200);
    printf("Notas de 100: %d\n", n100);
    printf("Notas de 50: %d\n", n50);
    printf("Notas de 20: %d\n", n20);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 5: %d\n", n5);
    return 0;
}
