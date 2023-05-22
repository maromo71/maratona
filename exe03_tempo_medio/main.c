#include <stdio.h>

int main() {
    int n, inicio, fim;
    int soma = 0, min = 120, max = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d %d", &inicio, &fim);
        if (inicio < 0 || inicio > 120 || fim < 0 || fim > 120 || inicio > fim) {
            printf("-1\n");
            return 0;
        }
        int duracao = (fim - inicio);
        soma += duracao;
        if (duracao < min) {
            min = duracao;
        }
        if (duracao > max) {
            max = duracao;
        }
    }
    float media = (float)soma / n;
    printf("%d\n%d\n%.1f\n", min, max, media);
    return 0;
}
