#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pilha.h"

// protótipos
BOOLEAN analisar(char * texto, char * encontrado, char * esperado);
void inverter(char * caracter);

int main() {
    char texto[101];
    char encontrado;
    char esperado;

    printf("Digite uma expressao para se analisar: ");
    fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = 0;

    if(analisar(texto, &encontrado, &esperado))
    {
        printf("Texto balanceado nos seus delimitadores!\n");
    }
    else
    {
        if(encontrado == ' ')
        {
            printf("Erro!\nEncontrado: nada\nEsperado: %c\n", esperado);
        }
        else if(esperado == ' ')
        {
            printf("Erro!\nEncontrado: %c\nEsperado: nada\n", encontrado);
        }
        else
        {
            printf("Erro!\nEncontrado: %c\nEsperado: %c\n", encontrado, esperado);
        }
    }
    return 0;
}

BOOLEAN analisar(char * texto, char * encontrado, char * esperado)
{
    int i = 0;
    char aux = ' ';
    BOOLEAN deuCerto = TRUE;

    for(i = 0; i < strlen(texto); i++)
    {
        if(texto[i] == '[' || texto[i] == '(' || texto[i] == '{')
        {
            deuCerto = push(texto[i]);
            if(!deuCerto)
            {
                printf("Estouro de pilha!\n");
                exit(-1);
            }
        }
        if(texto[i] == ']' || texto[i] == ')' || texto[i] == '}')
        {
            aux = ' ';
            deuCerto = pop(&aux);
            inverter(&aux);
            if(aux != texto[i] || !deuCerto)
            {
                *encontrado = texto[i];
                *esperado = aux;

                return FALSE;
            }
        }
    }
    if(!pilhaVazia())
    {
        pop(&aux);
        inverter(&aux);

        *encontrado = ' ';
        *esperado = aux;

        return FALSE;
    }

    return TRUE;
}

void inverter(char * caracter)
{
    switch(*caracter)
    {
        case '[':
            *caracter = ']';
            break;
        case ']':
            *caracter = '[';
            break;
        case '{':
            *caracter = '}';
            break;
        case '}':
            *caracter = '{';
            break;
        case '(':
            *caracter = ')';
            break;
        case ')':
            *caracter = '(';
            break;
    }
}
