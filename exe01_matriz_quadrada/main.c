#include <stdio.h>
#define MAX 15 // máximo da matriz
int main() {
    int n, m[MAX][MAX], i, j, k, d, num;
    while (scanf("%d", &n) && n > 0) {
        num = 1; // valor a ser preenchido na matriz
        d = 1; // número de dígitos do maior número da matriz
        num = 1;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                m[i][j] = num;
                num*=2;
                if (m[i][j] > 9) d = 2;
                if (m[i][j] > 99) d = 3;
                if (m[i][j] > 999) d = 4;
            }
            num = m[i][0] * 2;
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%*d", d, m[i][j]); // impressão do elemento formatado
                if (j < n-1) printf(" "); // separador entre elementos
            }
            printf("\n"); // nova linha após a impressão da linha
        }
        printf("\n"); // nova linha após a impressão da matriz
    }
    return 0;
}

