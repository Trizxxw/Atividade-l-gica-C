#include <stdio.h>

int main(){
    float SFX, SFN, V, C;
    
    printf ("Digite seu salário fixo: ");
    scanf ("%f", &SFX);
    printf("Digite o total de vendas no mês: ");
    scanf("%f", &V);
    C = V * 0.15;
    SFN = SFX + C;
    printf("Salário fixo: %.3f\n", SFX);
    printf("Salário final: %.3f\n", SFN);
    return 0;
}
