#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1005;
int proto_no[N],no[N],proto_grade[N],grade[N],sorted_no[N];

signed main()
{
    int n = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&proto_no[i],&proto_grade[i]);
        grade[i] = proto_grade[i];
        no[i] = proto_no[i];
    }
    
    sort(proto_grade,proto_grade + n);
    sort(proto_no,proto_no + n);

    int len = unique(proto_grade,proto_grade + n) - proto_grade;
    int k = unique(proto_no,proto_no + n) - proto_no;
    int rank = 1,pos,cnt = 0;

    for (int i = len-1; i >= 0; i--)
    {
        rank += cnt;
        cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if(grade[j] == proto_grade[i])
            {
                sorted_no[++cnt] = no[j];
            }
        }
        sort(sorted_no + 1,sorted_no + cnt + 1);
        for (int j = 1; j <= cnt; j++)
        {
            printf("%d %d %d\n",rank,sorted_no[j],proto_grade[i]);
        }
        
    }
    
    return 0;
}