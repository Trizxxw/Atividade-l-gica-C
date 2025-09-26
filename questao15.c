#include <stdio.h>

int main(){
    int N;
    
    printf ("Digite um número: ");
    scanf ("%d", &N);
    if (N % 2 == 0)
        printf("O número é par.\n");
    else
        printf("O número é impar.\n");
    
    return 0;
}
