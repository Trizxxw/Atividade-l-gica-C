#include <stdio.h>

int main(){
    int N;
    
    printf ("Digite um número: ");
    scanf ("%d", &N);
    if (N == 0)
        printf("O número é zero.\n");
    else if (N > 0)
        printf("O número é positivo.\n");
    else
        printf("O número é negativo.\n");
    
    return 0;
}
