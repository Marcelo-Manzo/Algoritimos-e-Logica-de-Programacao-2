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
            int parar_caractere = 0; // Variável para controlar a parada da comparação
            
            // O laço só continua se z < 50 E se NÃO for para parar a comparação
            for(int z = 0; z < 50 && !parar_caractere; z++)
            {
                if(nomes[j][z] != nomes[menor][z])
                {
                    if(nomes[j][z] < nomes[menor][z])
                    {
                        menor = j;
                    }
                    parar_caractere = 1; // Substitui o primeiro break
                }
                
                // O 'else if' garante que se os caracteres forem iguais mas chegarem ao fim (\0), para também
                else if(nomes[j][z] == '\0') 
                {
                    parar_caractere = 1; // Substitui o segundo break
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
