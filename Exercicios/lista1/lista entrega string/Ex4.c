#include <stdio.h>
#include <string.h>

int main()
{
    char predio[50][6];
    int i, j, n, p = 0, tem_fogo = 0;

    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%s", predio[i]);
    }
    
    // O laço externo só continua se i < n E se NÃO tem fogo (!tem_fogo)
    for(i = 0; i < n && !tem_fogo; i++)
    {
        // O primeiro laço interno só continua se j < 5 E se NÃO tem fogo (!tem_fogo)
        for(j = 0; j < 5 && !tem_fogo; j++)
        {
            if(predio[i][j] == 'F')
            {
                tem_fogo = 1;
            }
        }
        
        // A contagem de 'P' só acontece se o fogo NÃO tiver sido detectado
        if (!tem_fogo) 
        {
            for(j = 0; j < 5; j++)
            {
                if(predio[i][j] == 'P')
                {
                    p++;
                }
            }
        }
    }
    
    if(p == 0 && tem_fogo == 0)
    {
        printf("predio vazio\n");
    }
    else if(p == 0 && tem_fogo == 1)
    {
        printf("impossivel!\n");
    }
    else
    {
        printf("Resgatados %d\n", p);
    }
    
    return 0; 
}
