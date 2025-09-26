#include <stdio.h>

int main(){
    int N;
    
    printf ("Digite um número: ");
    scanf ("%d", &N);
    if (N >= 0)
        printf("Número: %d\n", N);
    else
        printf("Número: %d\n",-N);
    
    return 0;
}
