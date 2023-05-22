#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ALFABETO 26 // tamanho do alfabeto

int main() {
    int n, i, j, letra[ALFABETO], contador;
    char frase[1005];

    scanf("%d", &n); // leitura do número de casos de teste
    fflush(stdin);
    for (i = 0; i < n; i++) {
        // inicialização do vetor de contagem de letras
        for (j = 0; j < ALFABETO; j++) {
            letra[j] = 0;
        }

        contador = 0; // inicialização do contador de letras

        // leitura da frase
        gets(frase);

        // contagem de letras na frase
        for (j = 0; j < strlen(frase); j++) {
            if (isalpha(frase[j])) { // se o caractere é uma letra
                letra[tolower(frase[j]) - 'a']++; // incrementa o contador de letras
            }
        }

        // contagem de letras presentes na frase
        for (j = 0; j < ALFABETO; j++) {
            if (letra[j] > 0) {
                contador++;
            }
        }

        // classificação da frase
        if (contador == ALFABETO) {
            printf("frase completa\n");
        } else if (contador >= ALFABETO/2) {
            printf("frase quase completa\n");
        } else {
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}
