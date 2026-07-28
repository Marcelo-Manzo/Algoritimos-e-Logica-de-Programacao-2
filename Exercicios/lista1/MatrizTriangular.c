#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n, matriz[10][10], i,j, matrizTriangular = 1;
	scanf("%d", &n);
	for(i = 0; i<n; i++)
	{
	    for( j = 0; j < n; j++)
	    {
	        scanf("%d", &matriz[i][j]);
	    }
	}
	for(i = 0; i < n; i++)
	{
	    for(j = 0; j< n; j++)
	    {
	        if(i > j)
	        {
	            if(matriz[i][j] != 0)
	            {
	                matrizTriangular = 0;
	            }
	        }
	    }
	}
	if(matrizTriangular == 0){
	    printf("false");
	}
	else{
	    printf("true");
	}
	
}