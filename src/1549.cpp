#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,sum = 0;
    cin >> a >> b >> c >> d;
    sum += !a;
    sum += c;
    sum += d;
    sum += !d;
    cout << sum;
    return 0;
}