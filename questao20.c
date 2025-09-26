#include <stdio.h>

int main(){
    int N1, N2, N3, D;
    
    printf("Digite o 1º número: ");
    scanf("%d", &N1);
     printf("Digite o 2º número: ");
    scanf("%d", &N2);
     printf("Digite o 3º número: ");
    scanf("%d", &N3);
    if (N1 > N2) {
        D = N1; N1 = N2; N2 = D; }
    if (N1 > N3) { 
        D = N1; N1 = N3; N3 = D; }
    if (N2 > N3) { 
        D = N2; N2 = N3; N3 = D; }
    printf("Ordem crescente: %d, %d, %d", N1, N2, N3);
    return 0;
}
