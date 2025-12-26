#include<iostream>
using namespace std;
int main()
{
    int x,k,a1,a2,a3,a4;
    cin >> x >> k;
    a1 = x%k;
    a2 = ((x)/k)%k;
    a3 = ((x)/(k*k))%k;
    a4 = ((x)/(k*k*k))%k;
    cout << a4 << a3 << a2 << a1 <<endl;
    return 0;
}