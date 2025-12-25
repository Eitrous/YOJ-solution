#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 205;
int pre[N],aft[N];

signed main()
{
    int n,temp;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&pre[i]);
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(pre[j] > pre[j+1])
            {
                temp = pre[j];
                pre[j] = pre[j+1];
                pre[j+1] = temp;
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",pre[i]);
    }
    
    return 0;
}