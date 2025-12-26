#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin >> num;
    int len;
    if(num[0] == '-')
    {
        len = num.length()-1;
        cout << '-';
    }
    else
    {
        len = num.length();
    }
    reverse(num.begin(),num.end());
    int pos = 0;
    while (num[pos] == '0' && pos < len-1)
    {
        pos++;
    }
    
    for (int i = pos; i < len; i++)
    {
        cout << num[i];
    }
    
    return 0;
}