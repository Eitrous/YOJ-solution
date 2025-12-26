#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;

//const int N = 1e5 + 10;
int dp[20][135][7][7];
int res[135];

int calcu(int i, int j)
{
    return (int)(j*(18-i)/36.0);
}

void solve()
{
    dp[1][0][0][0] = 1;
    for (int i = 1; i <= 18; ++i){
        for (int j = 0; j <= 119; ++j){
            for (int k = 0; k < 3; ++k){
                for (int l = 0; l <= 3; ++l){
                    int count = dp[i][j][k][l];
                    if (count == 0) 
                        continue;
                    //答对
                    if (j+10 >= 120)
                        res[j+10] += count;
                    else{
                        dp[i+1][j+10][0][l] += count;
                    }
                    //放弃
                    dp[i+1][j][k][l+1] += count;
                    //答错
                    if (k+1 < 3){                
                        if (j > 30)
                            dp[i+1][j-calcu(i, j)][k+1][l] += count;
                        else
                            dp[i+1][0][k+1][l] += count;
                    }
                    else{
                        if (j > 30)
                            res[j-calcu(i, j)] += count;
                        else
                            res[0] += count;
                    }
                    
                }
            }
        }
    }

    for (int j = 0; j <= 129; ++j){
        for (int k = 0; k <= 3; ++k){
            for (int l = 0; l <= 3; ++l){
                res[j] += dp[19][j][k][l];
            }
        }
    }

    int n;
    cin >> n;
    int tmp;
    while (n--){    
        cin >> tmp;
        cout << res[tmp] << ' ';
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