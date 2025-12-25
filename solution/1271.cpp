#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    double mny = 0.0,rat = 0.0;
    string s;
    scanf("%lf",&rat);
    cin >> mny >> s;
    if(s == "USD") printf("%.2lfRMB",mny*rat);
    else if(s == "RMB") printf("%.2lfUSD",mny/rat);
    else printf("ERROR");
    return 0;
    
}