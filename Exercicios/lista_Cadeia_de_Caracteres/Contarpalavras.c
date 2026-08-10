#include <stdio.h>
int main()
{
    int espacos = 1, i = 0;
    char palavras[501];
    scanf("%[^\n]", palavras);
    while(palavras[i] != '\0')
    {
        if(palavras[i] == 32)
        {
            espacos++;
        }
        i++;
    }
    printf("%d", espacos);
    return 0;
}