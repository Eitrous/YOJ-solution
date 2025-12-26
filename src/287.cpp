#include<bits/stdc++.h>

int main()
{
    int n,b1,b2,b3,b4,bn,rm;
    std::cin >> n;
    if(n > 999) bn = 4;
    else if(n > 99) bn = 3;
    else if(n > 9) bn = 2;
    else bn = 1;
    rm = n;
    for (int i = 0; i < bn; i++)
    {
        std::cout << rm%10 << ',';
        rm /= 10;
    }
    std::cout << bn;
    return 0;
}