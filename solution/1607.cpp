#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long
//using ll = long long;

//const int N = 1e5 + 10;

void solve()
{
    int n,p,maxs;
    cin >> n >> p;
    int a[1005],c[1005];
    c[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(j == i)
                c[j] = max(p, c[j-1] + p);
            else
                c[j] = max(a[j], c[j-1] + a[j]);
        }
        sort(c+1, c+1+n);
        maxs = (i == 1 ? c[n] : max(c[n] , maxs));
    }
    cout << maxs;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while(_--)
        solve();
    return 0;
}