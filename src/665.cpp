#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cmath>
using namespace std;
int num[10005];

int main()
{
    int n,flag = 0,flag2 = 0,mark = 0;
    cin >> n;

    for (int i = 2; i*i < 10005; i++)
    {
        //if(!num[2*i])
        //{
            for (int j = 2*i; j < 10005; j += i)
            {
                num[j] = 1;
            }
        //}
    }

    for (int i = 2; i <= n ; i++)
    {
        if(num[i] == 0 && i*i > n) 
        {
        flag = i;
        break;
        }
    }
    
    for (int i = 1; i < flag ; i++)
    {
        if(num[i] == 0 && flag * i > n)
        {
            flag2 = i;
            break;
        }
    }

    // for (int i = 2; i < 10005; i++)
    // {
    //     if(num[i] == 0)
    //     {
    //         for (int j = 2; j < 10005; j++)
    //         {
    //             if(i*j > n && num[j] == 0) 
    //             {
    //                 flag = i;
    //                 flag2 = j;
    //                 mark = 1;
    //                 break;
    //             }
    //         }
    //         if(mark) break;
    //     }
    // }
    

    if(flag2 == 0) flag2 = flag;

    int x = flag*flag2;

    int rm,count = 1;

    rm = x - (int(sqrt(x)))*(int(sqrt(x)));
    while (rm != 0)
    {
        rm = rm - (int(sqrt(rm)))*(int(sqrt(rm)));
        count++;
    }
    
    if(count > 4) count = 4;
    
    cout << flag << ' ' << flag2 << endl;
    cout << count;
}