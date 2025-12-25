#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;

//const int N = 1e5 + 10;
int dp[35];

int Pow(int b, int d)
{
    int ans = 1;
    for (int i = 1; i <= d; ++i){
        ans *= b;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    dp[1] = 3, dp[2] = 6;
    for (int i = 3; i <= n; ++i){
        dp[i] = 3*Pow(2, i-1) - dp[i-1];
    }
    cout << dp[n];
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