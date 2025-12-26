#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    int r;
    while (a%b != 0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return r;
}

int main()
{
    long long n1 = 0,n2 = 0;
    scanf("%d/%d",&n1,&n2);
    int g = gcd(n1,n2);
    while (g != 1)
    {
        n1 /= g;
        n2 /= g;
        g = gcd(n1,n2);
    }
    printf("%d/%d",n1,n2);
    return 0;
}