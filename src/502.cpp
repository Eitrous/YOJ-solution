#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num = 0.0;
    char unit[5];
    scanf("%lf%s",&num,unit);
    if(unit[0] == 'k')
    {
        printf("%.3lflb",num*2.20462262);
    }
    else
    {
        printf("%.3lfkg",num*0.45359237);
    }
    return 0;
}