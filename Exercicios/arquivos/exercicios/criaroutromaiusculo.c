#include <stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f,*p;
    f = fopen("arquivo.txt", "r");
    p = fropen("arquivoM.txt", "w")
    if(f == null)
    {
        return 1;
    }
    char c = fgetc(f);
    while (c != EOF)
    {
        if(c > 'a' && c < 'z')
        {
            c -=32;
        }
        fputc(c, p);
        c = fgetc(f);
    }
    fclose(f);
    fclose(p);
}