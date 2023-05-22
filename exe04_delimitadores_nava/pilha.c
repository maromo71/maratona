#include "pilha.h"

// Variáveis
int posicao = 0;    // Determina o topo da pilha
char pilha[TAMANHO]; // A pilha em si

// Funções
/*
 * A função push adiciona um elemento novo na pilha
 * Ela recebe um inteiro e o coloca no topo da pilha.
 * Se conseguir retorna TRUE, mas se a pilha estiver
 * cheia retorna FALSE
 */
BOOLEAN push(char dado)
{
    if(posicao == TAMANHO)
    {
        return FALSE;
    }
    else
    {
        pilha[posicao] = dado;
        posicao++;
        return TRUE;
    }
}

/*
 * A função pop retira um elemento da pilha
 * Ela recebe a referência de um inteiro que
 * conterá o dado retirado do topo da pilha.
 * Se conseguir retorno TRUE, mas se a pilha estiver
 * vazia retorna FALSE
 */
BOOLEAN pop(char *dado)
{
    if(posicao == VAZIA)
    {
        return FALSE;
    }
    else
    {
        posicao--;
        *dado = pilha[posicao];
        return TRUE;
    }
}

/*
 * A função pilhaVazia verifica se a pilha está vazia.
 * Ela retorna TRUE se estiver vazia e FALSE se tiver
 * elementos.
 */
BOOLEAN pilhaVazia()
{
    if(posicao == VAZIA)
    {
        return TRUE;
    }
    return FALSE;
}
