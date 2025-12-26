#include<bits/stdc++.h>
using namespace std;

struct student
{
    int no;
    float point = 0;
}stu[1005];

int ranks,grade[15];

int pnt_calcu(int score)
{
    int n1,n2;
    n1 = score/10 - 5.0;
    if(n1 <= 0) return 0;
    if(n1 >= 4) return 40;
    n2 = (score%10 > 5 ? 7 : (score%10 > 2 ? 3 : 0));
    return n1*10+n2;
}

int main()
{
    int n,m,tmp;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> grade[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        cin >> stu[i].no;
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            stu[i].point += grade[j]*pnt_calcu(tmp);
        }
        
    }

    for (int i = 1; i <= n; i++)
    {
        ranks = 1;
        for (int j = 1; j <= n; j++)
        {
            if(j != i && stu[j].point > stu[i].point) ranks++;
        }
        printf("%d %.1f %d\n",stu[i].no,stu[i].point/10.0,ranks);
    }
    
    return 0;
    
}