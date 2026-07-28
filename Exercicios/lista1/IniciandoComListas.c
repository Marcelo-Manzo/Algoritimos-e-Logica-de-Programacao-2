#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int lista[10], div3[10], i, somaDiv = 0;
	double media = 0;
	for(i = 0; i<10; i++){
	    scanf("%d",&lista[i]);
	    media+=lista[i];
	    if(lista[i] % 3 == 0)
	    {
	        somaDiv += lista[i];   
	    }
	}
	media = media/10 * 1.00;
	printf("Média: %.lf\n", media);
	printf("Divisíveis: %d", somaDiv);
}