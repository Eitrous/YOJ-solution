#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if(!(i%400) || (!(i%4) && i%100)) count++;
    }
    cout << count;
    return 0;
}    