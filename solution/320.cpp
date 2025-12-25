#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

//const int N = 1e5 + 10;
int n, m;
int w[15], c[15], obj[205];
int dp[10005];

struct Query
{
    int weight;
    int ways;
};

bool cmp(const Query& a, const Query& b)
{
    if (a.ways != b.ways)
        return a.ways > b.ways;
    return a.weight < b.weight;
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> w[i];
    for (int i = 0; i < n; ++i)
        cin >> c[i];
    for (int i = 0; i < m; ++i)
        cin >> obj[i];
    
    dp[0] = 1;
    for (int i = 0; i < n; ++i){
        for (int j = w[i]; j <= 10000; ++j){
            dp[j] += dp[j - w[i]];
        }

        for (int j = 10000; j >= (c[i]+1) * w[i]; --j){
            dp[j] -= dp[j - (c[i]+1) * w[i]];
        }
    }

    vector<Query> q;
    for (int i = 0; i < m; ++i){
        q.push_back({obj[i], dp[obj[i]]});
    }

    sort(q.begin(), q.end(), cmp);

    for (int i = 0; i < m; ++i){
        cout << q[i].weight << ':' << q[i].ways << endl;
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