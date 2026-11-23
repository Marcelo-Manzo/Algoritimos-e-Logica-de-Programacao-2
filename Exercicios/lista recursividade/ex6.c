#include <stdio.h>

int contaDigitos(int n)
{
    if (n < 10)                         // 1 dígito (inclui o 0)
        return 1;
    return 1 + contaDigitos(n / 10);
}

int potencia(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * potencia(base, exp - 1);
}

int somaArmstrong(int n, int qtd)
{
    if (n == 0)
        return 0;
    return potencia(n % 10, qtd) + somaArmstrong(n / 10, qtd);
}

int main()
{
    int n;
    scanf("%d", &n);

    int qtd = contaDigitos(n);
    int soma = somaArmstrong(n, qtd);

    if (soma == n)
        printf("Armstrong");
    else
        printf("soma: %d", soma);

    return 0;
}