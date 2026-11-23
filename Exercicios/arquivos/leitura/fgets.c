#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f;
    f = fopen("arquivo.txt", "r");
    if(f == null)
    {
        return 1;
    }
    char c[20]; //19 + '\0'
    if(fgets(c, 20, f) == null) // str que vai receber; quantos serao lidos; arquivo    ---> para em \ln
    {
        printf("erro");
    }
    else{
        printf("%s", c);
    }
    fclose(f);
    return 0;
}