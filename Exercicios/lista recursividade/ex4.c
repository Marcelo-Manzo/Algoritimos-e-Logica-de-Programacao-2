#include <stdio.h>

int F(int n)
{
    if (n == 0) return 10;              // caso base
    if (n == 1) return 11;              // caso base
    if (n == 2) return 27;              // caso base

    return F(n - 2) - F(n - 3);         // caso recursivo
}

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        printf("%d\n", F(n));
    }
    return 0;
}