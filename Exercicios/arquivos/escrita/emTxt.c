#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f;

    f = fopen("arquivo.txt","w");
    if(f == null)
    {
        return 1;
    }
    char c = "meu programa";
    int i;
    for(int i = 0; i<strlen(c); i++)
    {
        fputc(c[i], f);c  //escreve um char em txt
        fputc(' ',f);
    }
    fclose(f);
}