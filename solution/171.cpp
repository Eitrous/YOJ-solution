#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    char c;
    cin >> a >> b >> c;
    if(c == '+')
    {
        cout << (a+b);
    }
    else if(c == '-')
    {
        cout << (a-b);
    }
    else if(c == '*')
    {
        cout << (a*b);
    }
    else if(c == '/')
    {
        if(b == 0)
        {
            cout << "NO";
            return 0;
        }
        cout << (a/b);
    }
    else if(c == '%')
    {
        if(b == 0)
        {
            cout << "NO";
            return 0;
        }
        cout << (a%b);
    }
    else
    {
        cout << "NO";
    }
    return 0;
}