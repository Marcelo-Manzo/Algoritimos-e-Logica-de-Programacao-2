#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0;
    scanf("%d", &n);

    int *vetor = (int*)calloc(n, sizeof(int));
    int *p = vetor; // p vai "caminhar", vetor guarda o início pra depois dar free

    for (int i = 0; i < n; i++)
    {
        scanf("%d", p);
        soma += *p;
        p++;          // avança pro próximo int
    }

    printf("SOMA: %d\n", soma);
    printf("MEDIA: %.2lf\n", (double)soma / n);

    free(vetor); // sempre libera o endereço ORIGINAL, nunca o p depois de andado
    return 0;
}