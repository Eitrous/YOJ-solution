#include<iostream>
#include<iomanip>
#include<math.h>
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
    double PI = M_PI;
    cout << fixed << setprecision(3) << 1+1/(1+1/(1+1/5.0)) << endl;
    cout << fixed << setprecision(3) << sqrt(3*3+4*4) << endl;
    cout << fixed << setprecision(3) << sqrt((1-cos(PI/3))/2) << endl;
    cout << fixed << setprecision(3) << 2*sin(PI/4)*sin(PI/4)+sin(PI/4)*cos(PI/4)-cos(PI/4)*cos(PI/4) << endl;
    cout << fixed << setprecision(3) << 2*sqrt(5)*(sqrt(6)+sqrt(3))/(6+3) << endl;
    return 0;
}