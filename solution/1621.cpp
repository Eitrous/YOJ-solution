#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

//const int N = 1e5 + 10;
int n, mindis = -1;
int grid[1000][1000];
int wx[8] = {1, -1, 0, 0, 1, -1, 1, -1};
int wy[8] = {0, 0, 1, -1, 1, -1, -1, 1};

struct Node
{
    int x;
    int y;
};

bool check(int x, int y)
{
    if (x < 0 || y < 0 || x > n-1 || y > n-1 || grid[x][y] != 0)
        return false;
    return true;
}

void bfs()
{
    if (grid[0][0] == 1 || grid[n-1][n-1] == 1) 
        return ;
    grid[0][0] = 1;
    queue<Node> q;
    q.push({0, 0});
    while (q.size()){
        Node node = q.front();
        q.pop();
        int x = node.x, y = node.y;
        if (x == n-1 && y == n-1){
            mindis = grid[x][y];
            return ;
        }
        for (int i = 0; i < 8; ++i){
            if (check(x+wx[i], y+wy[i])){
                q.push({x+wx[i], y+wy[i]});
                grid[x+wx[i]][y+wy[i]] = grid[x][y]+1;
            }
        }
    }
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> grid[i][j];
        }
    }
    bfs();

    cout << mindis;
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