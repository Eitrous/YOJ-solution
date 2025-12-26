#include<bits/stdc++.h>

bool isPrime[10000005];

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0),std::cout.tie(0);
    for (int i = 2; i*i < 10000001 ; i++)
    {
        if(!isPrime[i])
        {

            for (int j = i*i; j < 10000001 ; j += i)
            {
                isPrime[j] = 1;
            }

        }
    }
    isPrime[2] = 0;



    int n,num;
    std::cin >> n;
    while (n--)
    {
        std::cin >> num;
        if(isPrime[num])
        {
            std::cout << "NO ";
        }
        else
        {
            std::cout << "YES ";
        }
    }
    
    return 0;

    
}