#include <stdio.h>

int Mod(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    return Mod(x - y, y);
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (x < 0)
    {
        x = -x;
    }
    if (y < 0)
    {
        y = -y;
    }

    printf("%d", Mod(x, y));
    return 0;
}