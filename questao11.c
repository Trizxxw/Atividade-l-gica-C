#include <stdio.h>

int main(){
    float vc, vp, t;
    int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, cent, troco;
    
    printf("----MERCADO----\n");
    printf ("Valor da compra: ");
    scanf ("%f", &vc);
    printf("Valor pago: ");
    scanf("%f", &vp);
    t = vp - vc;
    troco = (int) t;
    cent = (t - troco) * 100 + 0.5;
    printf("Troco: R$ %.2f\n", t);
    n100 = troco / 100;
    troco %= 100;
    n50  = troco / 50;
    troco %= 50;
    n20  = troco / 20;
    troco %= 20;
    n10  = troco / 10;
    troco %= 10;
    n5   = troco / 5;
    troco %= 5;
    n2   = troco / 2;
    troco %= 2;
    m1    = troco;
    m50  = cent / 50;
    cent %= 50;
    m25  = cent / 25; 
    cent %= 25;
    m10  = cent / 10;
    cent %= 10;
    m5  = cent / 5; 
    cent %= 5;
    printf("nota de 100: %d\n", n100);
    printf("nota de 50: %d\n", n50);
    printf("nota de 20: %d\n", n20);
    printf("nota de 10: %d\n", n10);
    printf("nota de 5: %d\n", n5);
    printf("nota de 2: %d\n", n2);
    printf("moeda de 1: %d\n", m1);
    printf("moeda de 0.50: %d\n", m50);
    printf("moeda de 0.25: %d\n", m25);
    printf("moeda de 0.10: %d\n", m10);
    printf("moeda de 0.05: %d\n", m5);
    return 0;
}
