#include <stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    f = fopen("arquivo", "wb");
    if(f == null)
    {
        return 1
    }
    int n;
    scanf("%d", &n);
    while(n != null)
    {
        fwrite(n, sizeof(int), 1, f);
        scanf("%d", &n);
    }
    fclose(f);
}