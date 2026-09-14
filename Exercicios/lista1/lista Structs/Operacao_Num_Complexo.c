#include <stdio.h>

typedef struct 
{
    int a, b;
}Complexo;

int main()
{
    Complexo n1, n2, soma, multi; 
    scanf("%d%d", &n1.a, &n1.b);
    scanf("%d%d", &n2.a, &n2.b);

    soma.a = n1.a + n2.a;
    soma.b = n1.b + n2.b;
    multi.a = (n1.a * n2.a - n1.b*n2.b);
    multi.b = n1.a*n2.b + n2.a*n1.b;
    printf("Soma: %d+%di\n", soma.a, soma.b);
    printf("Multi: %d+%di\n", multi.a, multi.b);
    
}


