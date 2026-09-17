#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1) return 1;
    
    double *notas = (double*)calloc(n, sizeof(double));
    int *pesos = (int*)calloc(n, sizeof(int));

    double soma = 0; 
    int div = 0;
    double resultado; 
    
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &notas[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &pesos[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        soma += notas[i] * pesos[i];
        div += pesos[i];
    }
    
    resultado = soma / div;
    printf("%.2lf\n", resultado);

    free(notas);
    free(pesos);
    return 0;
}
