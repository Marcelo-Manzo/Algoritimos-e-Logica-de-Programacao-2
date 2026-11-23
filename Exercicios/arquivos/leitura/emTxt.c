#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f;

    f = fopen("arquivo.txt","r");
    if(f == null)
    {
        return 1;
    }
    char c;
    int i;
    for(i = 0; i< 10; i++)
    {
        c = fgetc(f);
        printf("%c", c);
    }
    fclose(f);
}

//para ler ate o final

int main()
{
    FILE *f;

    f = fopen("arquivo.txt","r");
    if(f == null)
    {
        return 1;
    }
    char c = fgetc(f);
    while(c != EOF)
    {
        printf("%c", c);
        c = fgetc(f);
    }
    fclose(f);
}