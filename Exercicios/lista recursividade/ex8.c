#include <stdio.h>
#include <string.h>

char *converterMaiusculo(char palavra[])7666666666666666666666666666666666666666666666
{
    int i;
    for (i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] >= 'a' && palavra[i] <= 'z')
        {
            palavra[i] -= 32;
        }
    }
    return palavra;
}

char *converterMinusculo(char palavra[])
{
    int i;
    for (i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            palavra[i] += 32;
        }
    }
    return palavra;
}

void intercalar(char *p1, char *p2, char *res)
{
    if (*p1 == '\0' && *p2 == '\0')     // caso base: as duas acabaram
    {
        *res = '\0';
        return;
    }

    if (*p1 != '\0')                    // ainda tem letra na 1ª
    {
        *res = *p1;
        res++;
        p1++;
    }
    if (*p2 != '\0')                    // ainda tem letra na 2ª
    {
        *res = *p2;
        res++;
        p2++;
    }

    intercalar(p1, p2, res);
}

int main()
{
    int n, j;
    char a[40], b[40], resultado[80];

    scanf("%d", &n);
    for (j = 0; j < n; j++)
    {
        scanf("%s %s", a, b);

        converterMaiusculo(a);
        converterMinusculo(b);

        intercalar(a, b, resultado);
        printf("%s\n", resultado);
    }
    return 0;
}