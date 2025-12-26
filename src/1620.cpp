#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
//using ll = long long;

//const int N = 1e5 + 10;

void solve()
{
    int arr[100000];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    if(!next_permutation(arr,arr+n)) sort(arr,arr+n);
    for(int i = 0; i < n; i++) cout << arr[i] << ' ';
}

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}