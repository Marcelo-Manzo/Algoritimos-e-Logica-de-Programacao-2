#include<stdio.h>
#include <stdlib.h>
 int main()
 {
    int *p, a, b;
    p = (int *)malloc(2*sizeof(int));
    scanf("%d%d", &a, &b);
    p[0] = a;
    p[1] = b;
    if(p[0] > p[1])
    {
        printf("%d %d", p[0], p[1]);
    }
    else{
        printf("%d %d", p[1], p[0]);
    }
    return 0;

 }