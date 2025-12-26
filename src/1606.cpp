#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

//const int N = 1e5 + 10;
bool matrix[1005][1005], tmplt[5][5];
int n, m, lmt;
char c;

void rc(int lay, bool val, int x, int y, int len)
{
    if (!val) return ;
    if (lay > 2){
        for (int i = 0; i < m; ++i){
            for (int j = 0; j < m; ++j){
                rc(lay-1, tmplt[i][j], x+i*len/m, y+j*len/m, len/m);
            }
        }
    }
    else{
        for (int i = 0; i < m; ++i){
            for (int j = 0; j < m; ++j){
                matrix[x+i][y+j] = tmplt[i][j];
            }
        }
    }
}

void solve()
{
    cin >> c >> n;
    cin >> m;
    int tmp;
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < m; ++j){
            cin >> tmp;
            if (tmp == 1)
                tmplt[i][j] = true;
        }
    } 
    lmt = pow(m, n-1);
    rc(n, true, 0, 0, lmt);
    for (int i = 0; i < lmt; ++i){
        for (int j = 0; j < lmt; ++j){
            if (matrix[i][j])
                cout << c;
            else
                cout << ' ';
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