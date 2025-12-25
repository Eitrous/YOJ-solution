#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float c;
    cin >> n;
    c = ((float)n-32)*5/9;
    cout << fixed << setprecision(2) << c;
    return 0;
}