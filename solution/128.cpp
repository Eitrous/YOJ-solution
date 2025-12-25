#include<bits/stdc++.h>
using namespace std;

struct student
{
    int no;
    int grade;
}stu[5005];

signed main()
{
    int n = 0,m = 0;
    scanf("%d %d",&n,&m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d",&stu[i].no,&stu[i].grade);
    }

    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            if(stu[j+1].grade > stu[j].grade)
            {
                stu[0] = stu[j+1];
                stu[j+1] = stu[j];
                stu[j] = stu[0];
            }
            if(stu[j+1].grade == stu[j].grade)
            {
                if(stu[j+1].no < stu[j].no)
                {
                    stu[0] = stu[j+1];
                    stu[j+1] = stu[j];
                    stu[j] = stu[0];                
                }
            }
        }
        
    }
    
    m = floor(m*1.5);
    int line = stu[m].grade;

    while (stu[m+1].grade == stu[m].grade)  
    {
        m++;
    }
    
    printf("%d %d\n",line,m);
    for (int i = 1; i <= m; i++)
    {
        printf("%d %d\n",stu[i].no,stu[i].grade);
    }
    
    return 0;
}