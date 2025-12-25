#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char c,c1,c2;
    int int1,int2;
    float flt1,flt2;

    cin >> int1 >> c >> int2;
    cin >> flt1 >> flt2;
    cin >> c1 >> c >> c2;
    cout << int1 << "," << int2 << endl << fixed << setprecision(1) << flt1 << " " << flt2 << endl << " " << c1 << ", " << c2;
    return 0;
}