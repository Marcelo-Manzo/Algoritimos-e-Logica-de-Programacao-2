#include<stdio.h>
int main()
{
    char nome[101],maiusculo[101];
    int i = 0;
    scanf("%100[^\n]%*c",nome)
    while(nome[i] != '\0')
    {
        if(nome[i]>=97 && nome[i]<=122)
        {
            maiusculo[i] = nome[i]-32;
        }
        else{
            maiusculo[i] = nome[i];
        }
        i++;
    }
    
}