#include<bits/stdc++.h>
using namespace std;
int times[5];

int main()
{
    int n,m,pos = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if(!(i%m)) times[pos%4]++;
        pos++;
    }
    
    for (int i = 0; i < 4; i++)
    {
        cout << times[i] << ' ';
    }
    
    return 0;
}