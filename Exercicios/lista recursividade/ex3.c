#include <stdio.h>

int ContaDigitosPares(int n)
{
    if (n == 0)                         // caso base: acabaram os dígitos
        return 0;

    if ((n % 10) % 2 == 0)              // último dígito é par
        return 1 + ContaDigitosPares(n / 10);

    return ContaDigitosPares(n / 10);   // último dígito é ímpar
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", ContaDigitosPares(n));
    return 0;
}