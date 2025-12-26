#include<bits/stdc++.h>
using namespace std;
#define int long long
//const int MAXN = ;

void solve()
{
    string str;
    char c = 'z';
    int n;
    cin >> str >> n;
    for(int i = 0; i < str.length(); i++) cout << char((str[i] - 'a' + n)%26 + 97);
}

signed main()
{
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}