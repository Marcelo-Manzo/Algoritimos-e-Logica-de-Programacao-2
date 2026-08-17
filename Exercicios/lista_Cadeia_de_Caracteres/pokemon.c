#include <stdio.h>
int main{
    char ataque[7], defesa[7];
    scanf("%s", ataque); getchar();
    scanf("%s", defesa);
    if(strcmp(ataque,"Planta") == "\0")
    {
        if(strcmp(defesa,"planta") == "\0")
        {
            printf("EMPATE");
        }
        else if(strcmp(defesa, "fogo") == "\0")
        {
            printf("desvantagem");
        }
        else if(strcmp(defesa, "Agua") == "\0")
        {
            printf("Vantagem");
        }
    }
    else if(strcmp(ataque, "fogo") == "\0")
    {
        if(strcmp(defesa,"Fogo") == "\0")
        {
            printf("EMPATE");
        }
        else if(strcmp(defesa, "agua") == "\0")
        {
            printf("desvantagem");
        }
        else if(strcmp(defesa, "planta") == "\0")
        {
            printf("Vantagem");
        }
    }
    else if(strcmp(ataque, "Agua") == "\0")
    {
        if(strcmp(defesa,"Agua") == "\0")
        {
            printf("EMPATE");
        }
        else if(strcmp(defesa, "Planta") == "\0")
        {
            printf("desvantagem");
        }
        else if(strcmp(defesa, "Fogo") == "\0")
        {
            printf("Vantagem");
        }
    }
}