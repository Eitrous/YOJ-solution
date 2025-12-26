#include<bits/stdc++.h>
#define endl '\n'
#define int long long
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
using namespace std;

string v[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
char t[4] = {'H', 'D', 'C', 'S'};

//const int N = 1e5 + 10;
struct Poker
{
    int val;
    char type;
};

Poker base[2], pub[5];

string check(int a, int b, int c)
{
    bool TH = false, SZ = true;
    char typ = base[0].type;
    int esu[3] = {a, b, c};

    if (typ == base[1].type){
        TH = true;
        for (int i = 0; i < 3; ++i){
            if (typ != pub[esu[i]].type)
                TH = false;
        }
    }

    int val[5] = {base[0].val, base[1].val, pub[a].val, pub[b].val, pub[c].val};
    sort(val, val+5);
    FOR(i, 1, 4){
        if (val[i] != val[i-1]+1)
            SZ = false;
    }
    if (SZ){
        if (val[4] == val[3]+1 || (val[4] == 14 && val[0] == 2))
            SZ = true;
        else
            SZ = false;
    }

    if (TH && SZ)
        return "THS";
    else if (TH)
        return "TH";
    else if (SZ)
        return "SZ";
    else
        return "GP";
}

void solve()
{
    string tmp;
    FOR(i, 0, 2){
        cin >> tmp;
        base[i].type = tmp[0];
        tmp = tmp.substr(1);
        FOR(j, 0, 13){
            if (tmp == v[j])
                base[i].val = j+2;
        }
    }
    FOR(i, 0, 5){
        cin >> tmp;
        pub[i].type = tmp[0];
        tmp = tmp.substr(1);
        FOR(j, 0, 13){
            if (tmp == v[j])
                pub[i].val = j+2;
        }
    }

    string permu = "GP";
    FOR(i, 0, 5){
        FOR(j, i+1, 5){
            FOR(k, j+1, 5){
                permu = max(permu, check(i, j, k));
            }
        }
    }

    cout << permu << endl;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    return 0;
}