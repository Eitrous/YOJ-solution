#include<bits/stdc++.h>
#define int long long
using namespace std;

int chart[105][55],point[15];

signed main()
{
    int n = 0,m = 0,tmpno = 0,tmpgrd = 0,tmppnt,maxpnt = 0;
    scanf("%d %d",&n,&m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&point[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        tmppnt = 0;
        scanf("%d",&tmpno);
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&tmpgrd);
            if(tmpgrd >= 60) tmppnt += point[j];
        }
        chart[tmppnt][++chart[tmppnt][0]] = tmpno;
        if(tmppnt > maxpnt) maxpnt = tmppnt;
    }
    
    for (int i = 0; i <= maxpnt; i++)
    {
        sort(chart[i],chart[i] + chart[i][0] + 1);
    }
    
    for (int i = maxpnt; i >= 0; i--)
    {
        if(chart[i][0] != 0)
        {
            for (int j = 1; j <= chart[i][0]; j++)
            {
                printf("%d %d\n",chart[i][j],i);
            }
            
        }
    }
    
    return 0;
}