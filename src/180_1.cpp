#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long double x,eps,sums = 0.0,sumc = 0.0;
    cin >> x >> eps;
    double pi = M_PI;
    while (x > 2*pi)
    {
        x -= 2*pi;
    }
    
    int i = 1;
    while (abs(sums-sin(x)) >= eps)
    {
        sums += pow(x,2*i-1)/tgamma(2*i);
        sums -= pow(x,2*i+1)/tgamma(2*i+2);
        i += 2;
    }
    cout << sums << endl;
    i = 0;
    while (abs(sumc-cos(x)) >= eps)
    {
        sumc += pow(x,2*i)/tgamma(2*i+1);
        sumc -= pow(x,2*i+2)/tgamma(2*i+3);
        i += 2;
    }
    cout << sumc << endl;
    return 0;
}