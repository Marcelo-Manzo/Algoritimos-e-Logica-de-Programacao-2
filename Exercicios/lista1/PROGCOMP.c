#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int lista[10], i;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &lista[i]);
    }
    for(i = 9; i>=0; i--)
    {
        printf("%d\n", lista[i]);
    }
    return 0;   
}