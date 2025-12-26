#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
//using ll = long long;

const int N = 1e5 + 10;

void solve()
{
    vector<int> r1,r2;
    int sum = 0,n,tmp;
    cin >> n;
    while(n--){
        cin >> tmp;
        sum += tmp;
        if(tmp%3 == 1) r1.push_back(tmp);
        else if(tmp%3 == 2) r2.push_back(tmp);
    }
    sort(r1.begin(),r1.end()),sort(r2.begin(),r2.end());
    if(sum%3 == 1){
        if(r1.size() == 0) sum -= r2[0]+r2[1];
        else if(r2.size() < 2) sum -= r1[0];
        else sum -= min(r2[0]+r2[1],r1[0]);
    }
    else if(sum%3 == 2){
        if(r2.size() == 0) sum -= r1[0]+r1[0];
        else if(r1.size() < 2) sum -= r2[0];
        else sum -= min(r2[0],r1[0]+r1[1]);
    }
    cout << sum;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}