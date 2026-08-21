#include <stdio.h>
#include <string.h>

int main()
{
    int n, k, i = 0, j = 0;
    scanf("%d%d", &n, &k);
    char nomes[100][50];
    
    for(i = 0; i < n; i++)
    {
        scanf("%s", nomes[i]);
    }
    
    for(i = 0; i < n - 1; i++)
    {
        int menor = i;
        for(j = i + 1; j < n; j++)
        {
            for(int z = 0; z < 50; z++)
            {
                if(nomes[j][z] != nomes[menor][z])
                {
                    if(nomes[j][z] < nomes[menor][z])
                    {
                        menor = j;
                    }
                    break;
                }
                
                if(nomes[j][z] == '\0') 
                {
                    break;
                }
            }
        }
        
        if(menor != i)
        {
            char maior[50];
            strcpy(maior, nomes[i]);
            strcpy(nomes[i], nomes[menor]);
            strcpy(nomes[menor], maior);
        }
    }
    
    printf("%s\n", nomes[k-1]);
    return 0;
}
