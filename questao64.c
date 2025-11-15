#include <stdio.h>

int main() {
    int B[4][4], i, j, sa, ms, l = 0;
  
    printf("--- matriz b ---\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    ms = 0;
    for (j = 0; j < 4; j++) {
        ms += B[0][j];
    }
    l = 0;
    for (i = 1; i < 4; i++) {
        sa = 0;
        for (j = 0; j < 4; j++) {
            sa += B[i][j];
        }
        if (sa > ms) {
            ms = sa;
            l = i;
        }
    }
    printf("linha com  maior soma e a linha (indice): %d\n", l);
    printf("maior soma: %d\n", ms);
    return 0;
}
