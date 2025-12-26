#include<bits/stdc++.h>
using namespace std;
#define int long long

int b[50],c[50];

signed main()
{
    char max;
    int base = 0,bitnum = 0;
    scanf("%c %d %d",&max,&base,&bitnum);
    if(max <= '9') max -= '0';
    else max = max - 'A' + 10;
    do
    {
        for (int i = 1; i <= bitnum; i++)
        {
            b[i] += (max + i - 1)%base;
        }
        max = (max + 1)%base;
        
    } while (max + bitnum - 1 != base - 1);

    int i = 1;
    for (; ; i++)
    {
        c[i] += b[i];
        c[i+1] += c[i]%10;
        c[i] /= 10;
        if(b[i+1] == 0 && c[i+1] == 0) break;
    }
    
    for (int j = i; j > 0; j--)
    {
        cout << c[j];
    }
    

    i = 1;
    for (; ; i++)
    {
        b[i+1] += b[i]%base;
        b[i] = b[i]/base;
        if(b[i+1] == 0) break;
    }
    for (int j = i; j > 0; j--)
    {
        if(b[j] > 9) cout << char(b[j] - 10 + 'A');
        else cout << b[j];
    }
    
}