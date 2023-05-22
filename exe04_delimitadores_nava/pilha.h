//
// Created by memar on 22/05/2023.
//

#ifndef EXE04_DELIMITADORES_NAVA_PILHA_H
#define EXE04_DELIMITADORES_NAVA_PILHA_H
#include "booleano.h"

// Constantes
/*
 * Vamos fugir dos números mágicos!
 * Usaremos constantes para representar
 * números especiais!
 */
enum {
    TAMANHO = 50, // Tamanho da pilha a ser criada
    VAZIA = 0,   // Indicação de pilha vazia
};

// Variáveis
/*
 * Para indicarmos que uma variável será criada dentro
 * de um arquivo ".c", usamos extern.
 */
extern int posicao;
extern char pilha[];

// Protótipos
BOOLEAN push(char dado);
BOOLEAN pop(char *dado);
BOOLEAN pilhaVazia();

#endif //EXE04_DELIMITADORES_NAVA_PILHA_H
