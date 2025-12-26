#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x,eps,sums = 0,sumc = 0;
    cin >> x >> eps;
    double pi = M_PI;
    while (x > 2*pi)
    {
        x -= 2*pi;
    }
    int i = 2;
    double tmp = x;
    while (abs(sums-sin(x)) >= eps)
    {
        sums += tmp;
        tmp = tmp*(-1)*x*x/(i*(i+1));
        i += 2;
    }
    cout << sums << endl;
    i = 1;
    tmp = 1;
    while (abs(sumc-cos(x)) >= eps)
    {
        sumc += tmp;
        tmp = tmp*(-1)*x*x/(i*(i+1));
        i += 2;
    }
    cout << sumc << endl;
    return 0;
}