#include<bits/stdc++.h>

int cls(int num)
{
    if(num == 1) return 120;
    else if(num == 2) return 40;
    else if(num == 3) return 85;
    else if(num == 4) return 50;
    else if(num == 5) return 100;
    else if(num == 6) return 140;
    else if(num == 7) return 70;
    else return 100;
}

int main()
{
    int na,nb,nc,nd,flag = 1;
    std::cin >> na >> nb >> nc >> nd;
    for (int a = 1; a < 9; a++)
    {
        if(na > cls(a)) continue;
        for (int b = 1; b < 9 ; b++)
        {
            if(nb > cls(b) || a == b) continue;
            for (int c = 1; c < 9; c++)
            {
                if(nc > cls(c) || a == c || b == c) continue;
                for (int d = 1; d < 9; d++)
                {
                    if(nd > cls(d) || a == d || b == d || c == d) continue;
                    flag = 0;
                    std::cout << a << ' ' << b << ' ' << c << ' ' << d << std::endl;
                }
                
            }
            
        }
        
    }
    if(flag) std::cout << -1;
    return 0;
    
}