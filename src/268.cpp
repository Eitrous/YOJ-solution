#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;

//const int N = 1e5 + 10;
int mp[55][55];
int vis[55];
int mindis = -1, n, s, d;

struct Way
{
    int dis = 0;
    int meth[55] = {0};
    int cnt = 0;
}minway;

queue<Way> q;

Way check(Way &a, Way &b)
{
    if (a.dis != b.dis)
        return (a.dis < b.dis ? a : b);
    FOR(i, 0, min(a.cnt, b.cnt)){
        if (a.meth[i] != b.meth[i])
            return (a.meth[i] < b.meth[i] ? a : b);
    }
    return (a.cnt < b.cnt ? a : b);
}

void bfs()
{   
    Way stt;
    stt.meth[0] = s;
    q.push(stt);

    while (q.size()){
        Way w = q.front();
        q.pop();

        if (w.meth[w.cnt] == d){
            if (minway.dis == -1)
                minway = w;
            else
                minway = check(minway, w);
            continue;
        }

        if (minway.dis != -1 && w.dis >= minway.dis)
            continue;

        for (int i = 0; i < n; ++i){
            if (mp[w.meth[w.cnt]][i] != -1){
                w.meth[w.cnt+1] = i;
                w.dis += mp[w.meth[w.cnt]][i], w.cnt++;
                q.push(w);
                w.dis -= mp[w.meth[w.cnt-1]][i], w.cnt--;
            }
        }
    }

}

void solve()
{
    cin >> n >> s >> d;
    FOR(i, 0, n){
        FOR(j, 0, n){
            cin >> mp[i][j];
        }
    }
    minway.dis = -1;
    bfs();
    if (minway.dis == -1) 
        cout << -1;
    else{
        cout << s;
        FOR(i, 1, minway.cnt+1){
            cout << "->" << minway.meth[i];
        }
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