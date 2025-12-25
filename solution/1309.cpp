#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

//const int N = 1e5 + 10;

struct Island
{
    int lands_x[105], lands_y[105], lands_cnt = 0;
    int trea_x[15], trea_y[15], trea_cnt = 0;
    int mineng = -1;

}islands[405];

int island_cnt, n, m;
bool vis[205][205];
int sea[205][205];

void dfs(int x, int y)
{
    vis[x][y] = true;
    islands[island_cnt].lands_cnt++, islands[island_cnt].lands_x[islands[island_cnt].lands_cnt] = x, islands[island_cnt].lands_y[islands[island_cnt].lands_cnt] = y;
    if (sea[x][y] == 2)
        islands[island_cnt].trea_cnt++, islands[island_cnt].trea_x[islands[island_cnt].trea_cnt] = x, islands[island_cnt].trea_y[islands[island_cnt].trea_cnt] = y;
    
    for (int i = -1; i <= 1; ++i){
        for (int j = -1; j <= 1; ++j){
            if (sea[x+i][y+j] != 0 && !vis[x+i][y+j] && abs(i) + abs(j) <= 1)
                dfs(x+i, y+j);
        }
    }
}

int discalcu(int ino, int lno)
{
    int dis = 0;
    int x = islands[ino].lands_x[lno], y = islands[ino].lands_y[lno];
    for (int i = 1; i <= islands[ino].trea_cnt; ++i){
        dis = max(dis, (int)sqrt((islands[ino].trea_x[i] - x)*(islands[ino].trea_x[i] - x) + (islands[ino].trea_y[i] - y)*(islands[ino].trea_y[i] - y)));
    }
    return dis;
}

void engcalcu(int ino)
{
    islands[ino].mineng = discalcu(ino, 1);
    for (int i = 2; i <= islands[ino].lands_cnt; ++i){
        islands[ino].mineng = min(islands[ino].mineng, discalcu(ino, i));
    }
    islands[ino].mineng = islands[ino].mineng;
}

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            cin >> sea[i][j];
        }
    }
    
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if (!vis[i][j] && sea[i][j] != 0){
                vis[i][j] = true;
                island_cnt++;
                dfs(i, j);
            }
        }
    }

    for (int i = 1; i <= island_cnt; ++i){
        if (islands[i].trea_cnt != 0)
            engcalcu(i);
    }

    int trea_isl_sum = 0, eng_sum = 0;
    for (int i = 1; i <= island_cnt; ++i){
        if (islands[i].trea_cnt != 0){
            trea_isl_sum++;
            eng_sum += islands[i].mineng;
        }
    }
    cout << trea_isl_sum << ' ' << eng_sum;
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