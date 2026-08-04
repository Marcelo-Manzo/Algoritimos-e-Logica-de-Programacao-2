#include<stdio.h>
int main(){
    char palavra[256],invertido[256];
    int i, cont = 0;
    scanf("%255[^\n]%*c", palavra);
    while(palavra[cont] != '\0')
    {
        cont++;
    }
    for(i = cont -1; i>=0; i--){
        printf("%s", palavra[i])
        invertido[cont-i-1] = palavra[i]
    }
    return 0;
}