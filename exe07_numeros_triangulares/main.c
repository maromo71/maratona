#include <stdio.h>
int triangular(int n);

int main() {
    int numero;
    scanf("%d", &numero);
    if(numero<1) return 0;
    for(int i=1; i<=numero; i++){
        printf("%d\n", triangular(i));
    }
    return 0;
}

int triangular(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n + triangular(n - 1));
    }
}
