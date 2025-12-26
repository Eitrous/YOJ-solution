#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

//const int N = 1e5 + 10;

void solve()
{
    int n;
    cin >> n;
    char c;
    if (n < 10)
        c = '0'+n;
    else
        c = 'A'+(n-10);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < i; ++j){
            cout << ' ';
        }
        for (int j = 2*n - 2*i - 1; j > 0; --j){
            cout << c;
        }
        cout << '\n';
    }
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while (_--)
        solve();
    return 0;
}