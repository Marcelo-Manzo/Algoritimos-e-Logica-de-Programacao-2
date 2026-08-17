#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l, c, r,q,id; 
    char nome[10];
    int lista[3][10];
    scanf("%d%d%d%d", &l, &c, &r, &q);
    for(int i = 0; i<q; i++)
    {
        scanf("%s", nome);
        scanf("%d%*c", &id);
        if(id == 1 && l > 0)
        {
            l--;
            strcpy(lista[0], nome);
        }
        else if(id == 2 && c > 0)
        {
            c--;
            strcpy(lista[1], nome);
        }
        else if (id == 3 && r > 0){
            r--;
            strcpy(lista[2], nome);
        }
    }
    printf("livro %d, %s\n", l, lista[0]);
    printf("celular %d, %s\n", c, lista[1]);
    printf("roupa %d, %s\n", r, lista[2]);
}