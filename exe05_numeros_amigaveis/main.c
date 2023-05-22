#include <stdio.h>
int soma_divisores(int n) {
    int soma = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n) {
                soma += i;
            } else {
                soma += (i + n / i);
            }
        }
    }

    return soma - n;
}

int main() {
    int a, b, soma_a, soma_b;
    scanf("%d", &a);
    scanf("%d", &b);

    soma_a = soma_divisores(a);
    soma_b = soma_divisores(b);

    if (soma_a == b && soma_b == a) {
        printf("amigavel\n");
    } else {
        printf("nao amigavel\n");
    }

    return 0;
}
