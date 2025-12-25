#include<iostream>
#include<cmath>
#include<iomanip>   
using namespace std;
int main()
{
    double x;
    cin >> x;
    if(x<0)
    {
        cout << fixed << setprecision(2) << -x;
    }
    else if(x>=0&x<=1)
    {
        cout << fixed << setprecision(2) << sqrt(x);
    }
    else
    {
        cout << fixed << setprecision(2) << x*x;
    }
    return 0;
}