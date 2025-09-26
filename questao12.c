#include <stdio.h>

int main(){
    int m1, m2, s;
    float m3;
    
    m1 = (7 + 8 + 9) / 3;
    m2 = (4 + 5 + 6) / 3;
    s = m1 + m2;
    m3 = (float) s / 2;
    printf ("Média 1: %d\n", m1);
    printf("Média 2: %d\n", m2);
    printf("Soma: %d\n", s);
    printf("Média das médias: %.2f\n", m3);
    return 0;
}
