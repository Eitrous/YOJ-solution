#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,used[15],unused[15];
bool is_used[15];

void prt()
{
    for (int i = 1; i <= n; i++) cout << used[i] << ' ';
    cout << '\n';
}

void arrage(int no)
{
    for (int i = 0; i < n; i++){
        if(!is_used[i]){
            used[no] = unused[i];
            is_used[i] = true;
            if(no == n) prt();
            else arrage(no+1);
            is_used[i] = false;
        }
    }
}

signed main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> unused[i];
    sort(unused,unused+n);
    arrage(1);
    return 0;
}