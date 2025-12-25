#include <stdio.h>
#include <stdlib.h>

int findMax(int *p, int nSize)
{
//____qcodep____
    int *tmp = p,tmpn = *p;
    int *maxn = p;
    for (int i = 1; i < nSize; i++){
        p++;
        if(*p > *maxn) maxn = p;
    }
    *tmp = *maxn,*maxn = tmpn;
    return *tmp;
}

int main()
{
    int ary[2100] = {3, 2, 1, 5, 6, 7, 9, 10}, n = 8, nMax, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    nMax = findMax(ary, n);

    for (i = 0; i < n; i++)
        printf("%d ", ary[i]);
    printf("\n");

    printf("%d\n", nMax);
    return 0;
}