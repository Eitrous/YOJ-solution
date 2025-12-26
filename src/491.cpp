#include<bits/stdc++.h>
using namespace std;
int preprice[105],price[105];

int main()
{
    int m,count = 1,i;
    bool flag = false;
    cin >> m;
    for ( i = 1; i <= m; i++)
    {
        cin >> price[i];
        preprice[i] = price[i];
    }

    do
    {
        for ( i = 1; i < m; i++)
        {
            if(preprice[i] != preprice[i+1]) break;
        }
        if(i == m) break;
        count++;
        price[1] = (preprice[1]+preprice[2])/2;
        price[m] = (preprice[m-1]+preprice[m])/2;
        for ( i = 2; i < m; i++)
        {
            price[i] = (preprice[i-1]+preprice[i]+preprice[i+1])/3;
        }
        for ( i = 1; i <= m; i++)
        {
            preprice[i] = price[i];
        }
        
        
    } while (!flag);
    
    cout << count;
    return 0;
}