#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double S,q;
    int a,b,c;
    cin >> a >> b >> c;
    q = ((double)a+(double)b+(double)c)/2;
    S = sqrt(q*(q-a)*(q-b)*(q-c));
    cout << fixed << setprecision(2) << S;
    return 0;
}