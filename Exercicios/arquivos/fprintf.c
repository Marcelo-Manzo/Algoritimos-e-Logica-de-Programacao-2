#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//usado para printar int, float, double.... tb da para printar char e strings
//usadas preferencialmente em binarios
//escreve e printa
int main()
{
    FILE *f;
    f = fopen("arquivo.txt", "w");
    if(f == null)
    {
        return 1;
    
    }
    char c = "M";
    int idade = 40
    fprintf(f,"%c%d", c, idade)
    fclose(f);
}