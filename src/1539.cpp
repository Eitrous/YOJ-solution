#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,n=0;
    cin >> a >> b >> c >> d;
    n = n*2+a;
    n = n*2+b;
    n = n*2+c;
    n = n*2+d;
    cout << n;
    return 0;
}