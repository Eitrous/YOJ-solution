#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N = 1005;
int num[N];

signed main()
{
    int t,temp,target = 0,count = 0;
    scanf("%d",&t);
    scanf("%d",&target);
    for (int i = 0; i < t; i++)
    {
        scanf("%d",&num[i]);
    }
    
    for (int i = 0; i < t - 1; i++)
    {
        for (int j = 0; j < t - 1 - i; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
        
    }
    
    int low = 0,mid,high = t-1,flag = -1;
    while (low <= high && flag == -1)
    {
        count++;
        mid = (low + high)/2;
        if(num[mid] == target)
        {
            flag = mid;
            break;
        }
        else if(num[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    
    printf("%d\n%d",flag,count);

    return 0;

}