#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MAXN = 105;
int ilds[MAXN],n,m,cnt = 0;
bool visited[MAXN][MAXN];

struct Node
{
    int ildno = 0;
    char type = '.';
} node[MAXN][MAXN];

int fdild(int x,int y)
{
    visited[x][y] = true;
    int s = 1;
    for (int i = x-1; i <= x+1; i++){
        for (int j = y-1; j <= y+1; j++){
            if(!visited[i][j] && node[i][j].type == 'I'){
                visited[i][j] = true;
                s += fdild(i,j);
            }
        }
    }
    return s;
}

void sol()
{
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if(!visited[i][j] && node[i][j].type == 'I'){
                ++cnt;
                ilds[cnt] = fdild(i,j);
            }
        }
    }
    sort(ilds+1,ilds+cnt+1);
    cout << cnt << ' ' << ilds[cnt];
}

signed main()
{
    cin >> n >> m;
    string str;
    for (int i = 1; i <= n; i++){
        cin >> str;
        for (int j = 1; j <= m; j++) node[i][j].type = str[j-1];
    }
    sol();
    return 0;
}