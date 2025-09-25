#include <stdio.h>

int main(){
    float cm, p;
    
    printf ("--CONVERSOR--\n");
    printf ("Digite o valor em cm:");
    scanf ("%f", &cm);
    p = (float) cm / 2.54;
    printf ("Valor em polegadas: %f\n", p);
    return 0;
}
