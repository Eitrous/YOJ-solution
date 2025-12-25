#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;

//const int N = 1e5 + 10;
struct neko
{
    char name;
    int l = 0;
    int r = 0;
}st[30];

void solve()
{
    set<char> tb;
    string str;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < str.length(); ++i){
        int len = tb.size();
        tb.insert(str[i]);
        if (len != tb.size()){
            st[cnt].name = str[i];
            st[cnt].l = i;
            st[cnt].r = i;
            cnt++;
        }
        else{
            for (int j = 0; j < cnt; ++j){
                if (st[j].name == str[i]){
                    st[j].r = i;
                }
            }
        }
    }

    int l = 0, r = 0;
    for (int i = 0; i < cnt; ++i){
        r = max(r, st[i].r);
        if (i < cnt-1 && st[i+1].l > r){
            cout << r-l+1 << ' ';
            l = r+1;
            r = st[i+1].r;
        }
    }
    cout << r-l+1;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    #endif
    
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while (_--)
        solve();
    return 0;
}