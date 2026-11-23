#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("arquivo", "rb")   //leitura de arquivo binario
    if(f == null)
    {
        return 1;
    }
    fclose(f);
}
int main()
{
    FILE *f;
    f = fopen("arquivo", "wb")   //escrita de arquivo binario
    if(f == null)
    {
        return 1;
    }
    fclose(f);
}
int main()
{
    FILE *f;
    f = fopen("arquivo", "ab")   //append de arquivo binario
    if(f == null)
    {
        return 1;
    }
    fclose(f);
}