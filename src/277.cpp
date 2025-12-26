#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;

//const int N = 1e5 + 10;

bool check(string str)
{
    int sum = 0;
    for (int i = 0; i < str.length(); ++i){
        if (str[i] == '(')
            sum++;
        if (str[i] == ')')
            sum--;
        if (sum < 0)
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    string str;
    vector<string> strs;
    for (int i = 0; i < n; ++i)
        str += "()";
    sort(str.begin(), str.end());
    do{
        if (check(str))
            strs.push_back(str);
    }while (next_permutation(str.begin(), str.end()));

    cout << strs.size() << endl;
    for (int i = 0; i < strs.size(); ++i){
        cout << strs[i] << endl;
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