#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int idade;
    char sexo[2];
    int tipo;
}Pessoa;

int main()
{
    int n, f;
    double receitaTotal = 0, receitaFila = 0, numeroH = 0, numeroM = 0, media_idades = 0; 
    scanf("%d", &n);
    Pessoa *convidados = (Pessoa*)calloc(n,sizeof(Pessoa));
    Pessoa *empregados = (Pessoa*)calloc(n,sizeof(Pessoa));
    Pessoa *preferencial = (Pessoa*)calloc(n,sizeof(Pessoa));

    Pessoa *lista[3] = {convidados, empregados, preferencial}; 

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d%s%d", &lista[j][i].idade, lista[j][i].sexo, lista[j][i].tipo);
        }
    }
    scanf("%s", f);

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(lista[j][i].tipo == 1)
            {
                receitaTotal+=40;
            }
            else{
                receitaTotal+=20;
            }
            if(strcmp(lista[j][i].tipo, "M") == 0){
                numeroH++;
            }
            else{
                numeroM++;
            }
            media_idades+=lista[j][i].idade;
        }
    }

    media_idades = media_idades/(n*3);

    if(f == 0)
    {
        for(int i = 0; i<n; i++)
        {
            if(lista[0][i].tipo == 1)
            {
                receitaFila += 40;
            }
            else{
                receitaFila += 20;
            }
        }

    }
    else if(f == 1)
    {
        for(int i = 0; i<n; i++)
        {
            if(lista[1][i].tipo == 1)
            {
                receitaFila += 40;
            }
            else{
                receitaFila += 20;
            }
        }
    }
    else if(f==2)
    {
        for(int i = 0; i<n; i++)
        {
            if(lista[2][i].tipo == 1)
            {
                receitaFila += 40;
            }
            else{
                receitaFila += 20;
            }
        }
    }
}
