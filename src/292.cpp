#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

double fun(double x)
{
    if(abs(x)<=1)
    {
        return abs(x-1)-2;
    }
    else
    {
        return 1/(1+x*x);
    }
}
int main()
{
    double x;
    cin >> x;
    cout << fixed << setprecision(2) << fun(fun(x));
    return 0;
}