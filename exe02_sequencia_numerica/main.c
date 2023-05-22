#include <stdio.h>

int main() {
    long int n, i = 6;
    scanf("%d", &n);
    // Verifica se N está dentro do intervalo válido
    if (n < 7 || n > 30) {
        return 0;
    }
    // Inicializa a sequência com os seis primeiros valores
    int seq[30] = {1, 1, 1, 2, 2, 2};
    do{
        seq[i] = seq[i-1] + seq[i-2] + seq[i-3]+ seq[i-4] + seq[i-5] + seq[i-6];
        i++;
    }while(i < 30);
    // Exibe o N-ésimo termo da sequência
    printf("%d\n", seq[n-1]);
    return 0;
}
