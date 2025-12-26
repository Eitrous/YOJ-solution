#include<bits/stdc++.h>
using namespace std;
#define int long long

int M[15][15],n;
bool vis[15][15];
int mindis = -1;

bool is_valid(int x,int y)
{
    if(x < 1 || y < 1 || x > n || y > n || vis[x][y]) return false;
    return true;
}

void dfs(int x,int y,int dis)
{
    if(x == n && y == n){
        mindis = (mindis == -1 ? dis : min(mindis,dis));
        return ;
    }
    if(M[x][y] == 0 || (mindis != -1 && dis >= mindis)) return ;

    vis[x][y] = true;

    for(int i = 1; i <= M[x][y]; i++){
        if(is_valid(x,y+i)) dfs(x,y+i,dis+1);
    }

    for(int i = 1; i <= M[x][y]; i++){
        if(is_valid(x+i,y)) dfs(x+i,y,dis+1);
    }

    for(int i = 1; i <= M[x][y]; i++){
        if(is_valid(x,y-i)) dfs(x,y-i,dis+1);
    }

    for(int i = 1; i <= M[x][y]; i++){
        if(is_valid(x-i,y)) dfs(x-i,y,dis+1);
    }

    vis[x][y] = false;

    return ;

}

void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> M[i][j];
    dfs(1,1,0);
    
    cout << mindis;

    return ;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}