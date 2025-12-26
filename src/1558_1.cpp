#include<bits/stdc++.h>

bool isPrime[10000005];

int main()
{
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
        scanf("%d",&num);
        if(isPrime[num])
        {
            printf("NO ");
        }
        else
        {
            printf("YES ");
        }
    }
    
    return 0;

    
}