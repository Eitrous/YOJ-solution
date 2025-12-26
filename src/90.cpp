#include<bits/stdc++.h>
#define int long long
using namespace std;
int no[105],num[105],problem[1000000],chat[105][105];

signed main()
{
    int n = 0,numble = 0,t = 0;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&numble);
        problem[numble] = 1;
    }

    int stu_n = 0,pro_stu_n = 0,problem_n = 0,count,max = 0;
    scanf("%d %d",&stu_n,&pro_stu_n);

    for (int i = 0; i < stu_n; i++)
    {
        problem_n = 0;
        scanf("%d %d",&no[i],&problem_n);
        count = 0;
        while (problem_n--)
        {
            scanf("%d",&t);
            if(problem[t] == 1) count++;
        }
        chat[count][++chat[count][0]] = no[i];
        if(count > max) max = count;
    }
    
    for (int i = 0; i <= max; i++)
    {
        sort(chat[i],chat[i]+chat[i][0]+1);
    }

    for (int i = max; i >= 0; i--)
    {
        for (int j = 1; j <= chat[i][0]; j++)
        {
            printf("%d ",chat[i][j]);
        }
        if(chat[i][0] != 0) pro_stu_n--;
        if(pro_stu_n == 0) return 0;
    }
    
    return 0;
}