#include <stdio.h>

int main(){
    int n1, n2, s, m;
    float d;
    printf("Digite o 1º número: ");
    scanf ("%d", &n1);
    printf("Digite o 2º número: ");
    scanf ("%d", &n2);
    s = n1 + n2;
    m = n1 * n2;
    d =(float) n1/n2;
    printf ("Soma = %d\n", s);
    printf("Multiplicação = %d\n", m);
    printf("Divisão = %.1f\n", d);
    return 0;
}
