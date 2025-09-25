#include <stdio.h>

int main(){
    float r, h, area, vol, pi;
    
    printf ("Raio do cilindro:");
    scanf("%f", &r);
    printf("Altura do cilindro:");
    scanf("%f", &h);
    pi = 3.14159;
    area = 2 * pi * r *(h+r);
    vol = pi* r* r * h;
    printf ("Área: %.2f\n", area);
    printf("Volume: %.2f\n", vol);
    return 0;
}
