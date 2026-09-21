#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
}Pessoa;

float idadeMedia(Pessoa *pessoas,int n)
{
    int soma = 0;
    for(int i = 0; i<n; i++)
    {
        soma += (*(pessoas + i)).idade;
    }
    return (float) soma/n;
}

int main()
{
    Pessoa *pessoas = (Pessoa*)calloc(3, sizeof(Pessoa));
    for(int i = 0; i<3; i++)
    {
        scanf("%s%d", pessoas[i].nome, &pessoas[i].idade);
    }
    printf("%f", idadeMedia(pessoas,3));
    free(pessoas);
    return 0;
}