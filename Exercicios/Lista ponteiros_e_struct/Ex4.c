#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[20];
    double preco;
    int qtd;
}Produto;

int main()
{
    int n,n2,i;
    double total = 0;
    char product_name[20];
    scanf("%d", &n);
    Produto *produtos = (Produto*)calloc(n,sizeof(Produto));

    for(i = 0; i<n; i++)
    {
        scanf("%s", produtos[i].nome);
        scanf("%lf %d", &produtos[i].preco, &produtos[i].qtd);
    }

    scanf("%d", &n2);
    for(i = 0; i<n2; i++)
    {
        scanf("%s", product_name);
        for(int j = 0; j<n; j++)
        {
            if(strcmp(product_name, produtos[j].nome) == 0 && produtos[j].qtd > 0)
            {
                total += produtos[j].preco;
                produtos[j].qtd --;
            }
        }
    }
    printf("%.2lf", total);
    free(produtos);

}
