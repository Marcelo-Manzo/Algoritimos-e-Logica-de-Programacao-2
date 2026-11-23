#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f;
    f = fopen("arquivo.txt", "w");
    if(f == null)
    {
        return 1;
    }
    char c[40] = "gosto de c comigo";
    f = fputs(c, f);
    fclose(f);

}