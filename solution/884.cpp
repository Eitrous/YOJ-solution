#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;

const int N = 1e4 + 10;
int n, sx, sy, ex, ey;
int mp[N][N];
int mv[3] = {-1, 0, 1};

struct Route
{
    int val = 0;
    int x[N];
    int y[N];
};

vector<Route> vec;

bool check(int x, int y)
{
    if (x < 0 || y < 0 || y > n-1 || mp[x][y] == 0)
        return false;
    return true;
}

void dfs(int x, int y, Route rt)
{
    int cnt = sx - x;
    rt.val += mp[x][y];
    rt.x[cnt] = x, rt.y[cnt] = y;

    if (x == ex && y == ey){
        vec.push_back(rt);
        return ;
    }

    x--;
    for (int i = 0; i < 3; ++i){
        if (check(x, y+mv[i])){
            dfs(x, y+mv[i], rt);
        }
    }
        
}

bool cmp(Route &a, Route &b)
{
    if (a.val != b.val)
        return a.val > b.val;
    for (int i = 1; i <= sx-ex; ++i){
        if (a.y[i] != b.y[i])
            return a.y[i] < b.y[i];
    }
    return false;
}

void solve()
{
    cin >> n;
    FOR(i, 0, n){
        FOR(j, 0, n){
            cin >> mp[i][j];
        }
    }

    cin >> sx >> sy >> ex >> ey;
    Route rt;
    rt.x[0] = sx, rt.y[0] = sy;

    dfs(sx, sy, rt);
    sort(vec.begin(), vec.end(), cmp);

    cout << vec[0].val << endl;
    for (int i = 1; i <= sx-ex; ++i){
        cout << '(' << vec[0].x[i] << ',' << vec[0].y[i] << ')';
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