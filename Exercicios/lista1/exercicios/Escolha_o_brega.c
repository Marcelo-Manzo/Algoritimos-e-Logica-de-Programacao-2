#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int lista[3],i,x,maior = 0, h; 
    
    for(i = 0; i<3; i++){
        scanf("%d", &lista[i]);
        if(lista[i] > maior){
            maior = lista[i];
        }
    }
    scanf("%d", &h);
    
    if(maior-h > 0){
        x = (maior + h + (maior - h)) / 2;
    }
    else{
        x = (maior + h -(maior - h)) / 2;
    }
    printf("%d", x*h);
    
}