#include <stdio.h>
#include <stdlib.h>

int trocar(int *p,int *q)
{
    int aux = *p;
    *p = *q;
    *q = aux;
    return 0;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("A: %d  B: %d", a, b);
    int *p = &a, *q = &b;
    trocar(p, q);
    printf("A: %d  B: %d", a, b);
    return 0;
}
