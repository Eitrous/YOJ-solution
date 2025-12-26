#include<iostream>

int main()
{
    int n,m,tmp,rm,sum;
    std::cin >> n >> m;
    if(n > m) 
    {
        tmp = n;
        n = m;
        m = tmp;
    }
    for (int i = n; i < m+1; i++)
    {
        rm = i;
        sum = 0;
        while (rm)
        {
            tmp = rm%10;
            sum += tmp*tmp*tmp;
            rm /= 10;
        }
        if(sum == i) std::cout << i << ' ';
        
    }
    return 0;
}