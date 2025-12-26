#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2200005;
int num[N];

signed main()
{
    //ios::sync_with_stdio(0),cin.tie(0),cin.tie(0);
    int n,x,flag = -1;
    //cin >> n >> x;
    scanf("%d %d",&n,&x);
    for (int i = 0; i < n; i++)
    {
        //cin >> num[i];
        scanf("%d",&num[i]);
    }
    
    int low = 0,mid,high = n-1;
    while (low <= high && flag == -1)
    {
        mid = (low+high)/2;
        if(num[mid] == x)
        {
            int j = mid - low + 1;
            flag = mid+1;
            while (j--)
            {
                if(num[mid-1] < x)
                {
                    flag = mid + 1;
                    low = high+1;
                    break;
                }
                mid--;
            }
            
        }
        else if(num[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(flag == -1) printf("-1");
    else printf("%d",flag);
    
    return 0;
}