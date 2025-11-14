#include <stdio.h>

int main() {
    float preco, total = 0;
    int cp;

    while (1) {
        printf("Digite o preco do produto (0 para encerrar): ");
        scanf("%f", &preco);
        if (preco == 0) {
            break;
        }
        total += preco;
    }
    printf("Digite a forma de pagamento: \n");
    printf("-------------------------------------------\n");
    printf("| 1 - A vista, em dinheiro ou cheque (-10%)|\n");
    printf("| 2 - A vista no cartao de credito (-5%)   |\n");
    printf("| 3 - Parcelado em 2x sem juros            |\n");
    printf("| 4 - Parcelado em 3x com juros (+10%)     |\n");
    printf("-------------------------------------------\n");
    scanf("%d", &cp);
    switch (cp) {
        case 1:
            total = total * 0.90;
            break;
        case 2:
            total = total * 0.95; 
            break;
        case 3:
            break;
        case 4:
            total = total * 1.10;
            break;
        default:
            printf("Codigo de pagamento invalido!\n");
            return 0;
    }
    printf("Total da compra = R$ %.2f\n", total);
    return 0;
}
