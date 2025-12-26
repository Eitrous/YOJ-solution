#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;

//const int N = 1e5 + 10;

string mark;
int rate;

bool cmp(string a, string b)
{
    while (a[0] == mark[0])
        a = a.substr(1);
    while (b[0] == mark[0])
        b = b.substr(1);

    if (a.length() != b.length())
        return a.length() < b.length();
    for (int i = 0; i < a.length(); ++i){
        if (a[i] != b[i]){
            int av = 0, bv = 0;
            while (a[i] != mark[av])
                av++;
            while (b[i] != mark[bv])
                bv++;
            return av < bv;
        }
    }
    return false;
}

int calcu(string str)
{
    int ans = 0;
    int len = str.length();
    int r = 1;
    for (int i = len-1; i >= 0; --i){
        int j = 0;
        for (; j < mark.length(); ++j){
            if (str[i] == mark[j])
                break;
        }
        ans += r*j;
        r *= rate;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n >> mark;
    rate = mark.length();
    string grade[105];
    for (int i = 0; i < n; ++i){
        cin >> grade[i];
    }

    sort(grade, grade+n, cmp);
    for (int i = n-1; i >= 0; --i)
        cout << grade[i] << ' ';
    cout << endl << calcu(grade[0]);
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