#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    char stack[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, char element) {
    if (s->top == MAX_SIZE - 1) {
        printf("Erro: a pilha está cheia.\n");
        exit(1);
    }
    s->stack[++s->top] = element;
}

char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Erro: a pilha está vazia.\n");
        exit(1);
    }
    return s->stack[s->top--];
}

int isMatchingPair(char opening, char closing) {
    if (opening == '(' && closing == ')')
        return 1;
    if (opening == '[' && closing == ']')
        return 1;
    if (opening == '{' && closing == '}')
        return 1;
    return 0;
}

int isBalanced(char expression[]) {
    Stack stack;
    initialize(&stack);
    int i = 0;

    while (expression[i] != '\0') {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{') {
            push(&stack, expression[i]);
        } else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}') {
            if (isEmpty(&stack) || !isMatchingPair(pop(&stack), expression[i])) {
                return 0;
            }
        }
        i++;
    }

    return isEmpty(&stack);
}

int main() {
    char expression[MAX_SIZE];

    printf("Digite a expressão: ");
    fgets(expression, MAX_SIZE, stdin);

    if (isBalanced(expression)) {
        printf("resultado correto.\n");
    } else {
        printf("resultado incorreto.\n");
    }

    return 0;
}
