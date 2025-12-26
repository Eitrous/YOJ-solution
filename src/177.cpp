#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N = 180;
int stun[N];

signed main()
{
    int n = 0,k = 0,count = 0,no = 0,sum = 0,j = 0,noo;
    scanf("%d %d",&n,&k);
    while (n--)
    {
        scanf("%d",&no);
        noo = no;
        sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum += no%10;
            no /= 10;
        }
        if(sum%k == 0)
        {
            stun[j] = noo;
            j++;
        }
        
    }

    sort(stun,stun + j);

    printf("%d\n",j);
    for (int i = 0; i < j; i++)
    {
        printf("%d\n",stun[i]);
    }
    
    return 0;
}