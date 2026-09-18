#include <stdio.h>
#include <string.h>

int main(){
    char texto[301];
    int i=0, j;

    scanf("%300[^\n]",texto);
    while(texto[i]!= '\0')
    {
        if(texto[i] == ' ' && texto[i+1] == ' '){
            j = i;
            while(texto[j] != '\0')
            {
                texto[j] = texto[j+1];
                j++;
            }
            i--;
        }
        i++;
    }
    printf("%s", texto);
}