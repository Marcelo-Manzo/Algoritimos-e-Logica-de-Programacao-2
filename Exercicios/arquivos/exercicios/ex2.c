int ehPrimo(int n)
{
    aux = 2
    for(int i = 2; i < srqt(n); i++)
    {
        if(n % i == 0)
        {
            aux++;
        }
    }
    if(aux != 2)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void imprimirPrimos(int ate)
{
    for(int i = 2; i < ate; i++)
    {
        if(ehPrimo(i) == 0)
        {
            printf("%d", i);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    imprimirPrimos(n);
    return 0;
}
