#include <stdio.h>

int main() {

    char sexo, resp;
    int i, sim, nao, FS, MN;
    float percFS, percMN;

    sim = 0;
    nao = 0;
    FS = 0;
    MN = 0;

    for (i = 1; i <= 20; i++) {
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Resposta (S/N): ");
        scanf(" %c", &resp);
        if (resp == 'S' || resp == 's') sim++;
        else if (resp == 'N' || resp == 'n') nao++;
        if ((sexo == 'F' || sexo == 'f') && (resp == 'S' || resp == 's')) FS++;
        if ((sexo == 'M' || sexo == 'm') && (resp == 'N' || resp == 'n')) MN++;
    }
    percFS = (FS / 20.0) * 100;
    percMN = (MN / 20.0) * 100;
    printf("\nPessoas que responderam SIM: %d\n", sim);
    printf("Pessoas que responderam NAO: %d\n", nao);
    printf("Porcentagem de mulheres que disseram SIM: %.1f%%\n", percFS);
    printf("Porcentagem de homens que disseram NAO: %.1f%%\n", percMN);
    return 0;
}
