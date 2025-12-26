#include<bits/stdc++.h>
using namespace std;
#define int long long

int mnt[55][55],r,c,maxdis = 1;
int mark[55][55];

int ski(int x,int y)
{
    int maxd = 1;
    if(x > 0 && mnt[x][y] > mnt[x-1][y]){
        if(mark[x-1][y]) maxd = max(maxd,1 + mark[x-1][y]);
        else maxd = max(maxd,1 + ski(x-1,y));
    }
    if(y > 0 && mnt[x][y] > mnt[x][y-1]){
        if(mark[x][y-1]) maxd = max(maxd,1 + mark[x][y-1]);
        else maxd = max(maxd,1 + ski(x,y-1));
    }
    if(x < r-1 && mnt[x][y] > mnt[x+1][y]){
        if(mark[x+1][y]) maxd = max(maxd,1 + mark[x+1][y]);
        else maxd = max(maxd,1 + ski(x+1,y));
    }
    if(y < c-1 && mnt[x][y] > mnt[x][y+1]){
        if(mark[x][y+1]) maxd = max(maxd,1 + mark[x][y+1]);
        else maxd = max(maxd,1 + ski(x,y+1));
    }

    mark[x][y] = maxd;
    return maxd;
}

signed main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) cin >> mnt[i][j];
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            mark[i][j] = ski(i,j);
            maxdis = max(mark[i][j] , maxdis);
        }
    }
    cout << maxdis;
    return 0;
}