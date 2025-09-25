#include <stdio.h>

int main(){
    float r, a, pi;
    
    printf("Comprimento do raio: ");
    scanf("%f", &r);
    pi = 3.14159;
    a = pi * r * r;
    printf("https://www.onlinegdb.com/#editor_1Área do circulo: %.2f\n", a);
    return 0;
}
