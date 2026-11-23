#include <stdio.h>

int fastExp(int a, int n){
    int aux = 0;
    if(n == 0)
    {
        return 1;
    }
    if(n > 0 && n%2 == 0)
    {
        aux = fastExp(a, (n/2));
        return aux * aux;
    }
    else{
        aux = fastExp(a, (n-1)/2);
        return a*aux*aux;
    }
}

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    printf("%d", fastExp(a, n));
    return 0;
}