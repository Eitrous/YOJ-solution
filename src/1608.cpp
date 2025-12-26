#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long
//using ll = long long;

//const int N = 1e5 + 10;
string T;
string tgt[10005];

void solve()
{
    
    int n;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
        cin >> str[i];
    cin >> T;
    int len = T.length();
    
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if(str[i].length() >= len)
            if(str[i].substr(0,len) == T)
                tgt[cnt++] = str[i];
    }
    sort(tgt,tgt+cnt);
    for (int i = 0; i < cnt; i++)
        cout << tgt[i] << endl;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while(_--)
        solve();
    return 0;
}