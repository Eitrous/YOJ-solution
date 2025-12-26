#include<bits/stdc++.h>

int main()
{
    int sum;
    std::cin >> sum;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if(j == i) continue;
            for (int k = 1; k < 6; k++)
            {
                if(k == j || k == i) continue;
                for (int l = 1; l < 6; l++)
                {
                    if(l == k || l == j || l == i) continue;
                    for (int m = 1; m < 6; m++)
                    {
                        if(m == l || m == k || m == j || m == i) continue;
                        if(i+4*j+6*k+4*l+m == sum)
                        {
                            std::cout << i << ' ' << j << ' ' << k << ' ' << l << ' ' << m;
                            return 0;
                        }
                    }
                    
                }
                
            }
            
        }
        
    }
    
}