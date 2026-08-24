#include<stdio.h>
int main()
{
    int x, y; 
    int *p, *q;
    x = 8;
    y = 7;
    p = &x;  p passa a apontar para o endereco de x;
    q = p;   q tb passa a apontar pro mesmo endereco;
    *q = 21;  o endereco de q (mesmo endereco de P tb) recebe o valor 21. logo, x passa a ser 21;
    printf("%d, %d",x, y);printa:  21, 7;
}

int main()
{
    int v[5] = {1,2,3,4,5}
    int *p = v;
    p esta apontando para v[0], ou seja,  1.
    p++;
    agora p esta apontando para v[1] ou seja, 2
}  