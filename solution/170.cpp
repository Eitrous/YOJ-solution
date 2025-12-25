#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int n0 = 0,n1 = 0,a;
    while (!feof(stdin))
    {
        scanf("%d",&a);
        switch (a)
        {
        case 0:
            n0++;
            break;
        
        case 1:
            n1++;
            break;
        }
        if((n0>=21 || n1>=21) && abs(n0-n1) > 1)
        {
            if(n0 > n1) {cout << 0; break;}
            else {cout << 1; break;}
        }
    }
    return 0;
}