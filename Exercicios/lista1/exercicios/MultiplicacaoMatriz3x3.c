#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int matriz1[3][3], matriz2[3][3], matriz3[3][3], i,j,k, soma = 0;
	for(i = 0; i<3; i++)
	{
	    for(j = 0; j<3; j++)
	    {
	        scanf("%d", &matriz1[i][j]);
	    }
	}
	for(i = 0; i<3; i++)
	{
	    for(j = 0; j<3; j++)
	    {
	        scanf("%d", &matriz2[i][j]);
	    }
	}
	
	
	for(i = 0; i<3; i++)
	{
	    for(j = 0; j<3; j++)
	    {
	        for(k = 0; k<3; k++)
	        {
	            soma+=matriz2[k][j]*matriz1[i][k];
	        }
	        if(j !=2)
	        {
	            printf("%d ", soma);
	        }
	        else{
	            printf("%d", soma);
	        }
	        soma = 0;
	    }
	    printf("\n");
	}
}