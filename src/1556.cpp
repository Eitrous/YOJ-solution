#include<bits/stdc++.h>

int a[1000000],c,i = 0;

int main()
{
    while (1)
    {
        std::cin >> a[i];
        if(a[i] == 0) break;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        std::cout << a[j] << ' ';
    }
    
    return 0;
}