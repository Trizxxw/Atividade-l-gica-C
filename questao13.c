#include <stdio.h>

int main(){
    float PF, I, R, P;
    
    printf("Preço de fábrica: ");
    scanf("%f", &PF);
    I = PF * 0.45;
    R = PF * 0.28;
    P = PF + I + R;
    printf("Preço final: %.3f\n", P);
    return 0;
}
