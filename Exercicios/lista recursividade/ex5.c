#include <stdio.h>
#include <string.h>

char *binario(int n, char *s)
{
    if (n < 2)                          // caso base: 0 ou 1
    {
        s[0] = '0' + n;
        s[1] = '\0';
        return s;
    }

    binario(n / 2, s);                  // converte a parte que sobra
    int tam = strlen(s);
    s[tam] = '0' + (n % 2);             // acrescenta o bit atual no final
    s[tam + 1] = '\0';
    return s;
}

int main()
{
    int n;
    char resultado[40];                 // 1.000.000.000 cabe em 30 bits

    scanf("%d", &n);
    printf("%s", binario(n, resultado));
    return 0;
}