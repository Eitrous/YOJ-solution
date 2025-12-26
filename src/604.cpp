#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long
//using ll = long long;

//const int N = 1e5 + 10;

struct Node
{
    int id;
    Node* before;
    Node* next;
}circle[1001];

int del(int it)
{
    int tmp = circle[it].next->id;
    circle[circle[it].before->id].next = &circle[circle[it].next->id];
    circle[circle[it].next->id].before = &circle[circle[it].before->id];
    return tmp;
}

void solve()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        circle[i].id = i;
        circle[i].before = &circle[i-1];
        circle[i].next = &circle[i+1];
    }
    int it = 1;
    circle[1].before = &circle[n];
    circle[n].next = &circle[1];
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            it = circle[it].next->id;
        }
        it = del(it);
    }
    cout << it;
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}