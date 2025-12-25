#include <stdio.h>
#include <stdlib.h>

//____qcodep____

int power(int x,int y)
{
    if(y == 0) return 1;
    else
    {
        int s = 1;
        for (int i = 0; i < y; i++)
        {
            s *= x;
        }
        return s;
    }
}


int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", power(x, y));
    return 0;

}