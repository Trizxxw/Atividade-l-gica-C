#include <stdio.h>

int main(){
    int N, N2;
    
    printf ("Digite um número: ");
    scanf ("%d", &N);
    printf ("Digite outro número: ");
    scanf ("%d", &N2);
    if (N == N2)
        printf("Os dois números são iguais.\n");
    else{
        printf("Os números são diferentes.\n");
        if (N > N2)
        printf("O maior número é o %d", N);
        else
        printf("O maior número é o %d", N2);
    }
    return 0;
}
