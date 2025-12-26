#include<bits/stdc++.h>
using namespace std;
#define int long long
//const int MAXN = ;
int M[1005][1005];

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> M[i][j];
    }
    
    int k,num,I,J;
    bool flag;
    cin >> k;
    while(k--){
        cin >> num;
        flag = false;
        for(int i = 0; i < n; i++){
            if(M[i][0] <= num && num <= M[i][n-1]){
                I = i;
                J = lower_bound(M[I],M[I]+n,num)-M[I];
                if(M[I][J] == num){
                    cout << I << ' ' << J <<'\n';
                    flag = true;
                    break;
                }
            }
        }
        if(!flag) cout << -1 << '\n';
    }
}

signed main()
{
    //ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}