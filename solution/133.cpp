// #include<iostream>
// #include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,flag = 1,tmp,i = 0,f1,f2;
    string s,r;
    //int s[10000],r[10000];
    cin >> n >> d;
    cout << n/d << ".";
    tmp = n%d;
    if(!(n%d)){
        cout << 0;
        return 0;
    }
    while (flag)
    {
        s[i] = char((tmp*10)/d+'0');
        r[i] = char(tmp+'0');
        for (int j = 0; j < i; j++)
        {
            if(r[i] == r[j])
            {
                f1 = j;
                f2 = i;
                flag = 0;
                break;
            }
        }
        i++;
        tmp = (tmp*10)%d;
    }
    for (int i = 0; i < f1; i++)
    {
        cout << s[i];
    }
    if(f2-f1 == 1 && s[f1] == '0')
    {
        return 0;
    }
    cout << '(';
    for (int i = f1; i < f2; i++)
    {
        cout << s[i];
    }
    cout << ')';
    return 0;
}