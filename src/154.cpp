#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double typein,result;
    cin >> typein;
    if(typein<0)
    {
        cout << -typein;
    }
    else if(typein>=0&typein<=1)
    {
        cout << sqrt(typein);
    }
    else
    {
        result = pow(typein,2);
    }
    return 0;
}