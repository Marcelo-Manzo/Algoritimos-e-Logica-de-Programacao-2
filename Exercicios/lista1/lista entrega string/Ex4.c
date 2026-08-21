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
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(predio[i][j] == 'F')
            {
                tem_fogo = 1;
                break;
            }
        }
        
        if (tem_fogo == 1) 
        {
            break; 
        }

        for(j = 0; j < 5; j++)
        {
            if(predio[i][j] == 'P')
            {
                p++;
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
