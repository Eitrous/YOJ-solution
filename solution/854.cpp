#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;

const int N = 1e6 + 10;
int posnum[N], negnum[N];

void solve()
{
    int n;
    cin >> n;
    int cp;
    while (n--){
        cin >> cp;
        int *num = (int*)malloc(cp * sizeof(int));
        for (int i = 0; i < cp; ++i){
            cin >> num[i];
        }
        sort(num, num+cp);
        int len = unique(num, num+cp) - num;
        for (int i = 0; i < len; ++i){
            if (num[i] >= 0)
                posnum[num[i]]++;
            else 
                negnum[-num[i]]++;
        }
        free(num);
    }

    int sum = 0;
    for (int i = 0; i < N; ++i){
        if (posnum[i] == 1)
            sum += i;
        if (negnum[i] == 1)
            sum -= i;
    }
    cout << sum;
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