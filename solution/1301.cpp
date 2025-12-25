#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;

//const int N = 1e5 + 10;

void solve()
{
    int a, b;
    cin >> a >> b;
    int sa = 0, sb = 0, tmp;
    for (int i = 0; i < a; ++i){
        cin >> tmp;
        sa += tmp;
    }
    for (int i = 0; i < b; ++i){
        cin >> tmp;
        sb += tmp;
    }

    if (sa <= 21 && sb <= 21){
        if (sa > sb)
            printf("A wins with %d points", sa);
        else if (sa < sb)
            printf("B wins with %d points", sb);
        else
            printf("Draw with %d and %d points", sa, sb);
    }
    else if (sa <= 21)
        printf("A wins with %d points", sa);
    else if (sb <= 21)
        printf("B wins with %d points", sb);
    else
        printf("Draw with %d and %d points", sa, sb);  
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    //ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while (_--)
        solve();
    return 0;
}