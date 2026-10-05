#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void contagem(int *p)
{
    int i, j;
    for(i = 1; i<=*p; i++)
    {
        for(j = 1; j<=i; j++)
        {
            printf("%d", i);
            if(j != i)
            {
                printf("-");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n, *p = &n;
    scanf("%d", &n);
    contagem(p);
}