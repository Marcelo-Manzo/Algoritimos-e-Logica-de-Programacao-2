#include <stdlib.h>
#include <stdio.h>

void reduz(int *a, int n)
{
    for(int i = 0; i<n; i++)
    {
        if(a[i] > 10)
        {
            a[i] = 10;
        }
        // ou assim *(a + i) > 10........
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int *lista = (int*)calloc(n, sizeof(int));
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &lista[i]);
    }
    reduz(lista, n);
    for(int i=0; i<n; i++)
    {
        printf("%d\n", lista[i]);
    }
    free(lista);
    return 0;
}