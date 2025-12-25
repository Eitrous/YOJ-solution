#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
//using ll = long long;

//const int N = 1e5 + 10;

void solve()
{
    int num[25];
    int m,n;
    
    num[1] = 1,num[2] = 2,num[3] = 4;
    for(int i = 4; i <= 25; i++) num[i] = num[i-1] + num[i-2] + num[i-3];
    
    cin >> n;
    while(n--){
        cin >> m;
        cout << num[m] << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}