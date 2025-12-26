#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,s,used[15],unused[15],tmp[15];
bool is_used[15];

void prt()
{
    for (int i = 1; i <= n; i++) cout << used[i] << ' ';
}

bool sum()
{
    for (int i = 1; i <= n; i++) tmp[i] = used[i];
    for (int i = 1; i < n; i++){
        for (int j = 1; j <= n-i; j++) tmp[j] += tmp[j+1];
    }
    if(tmp[1] == s) return true;
    else return false;
}

void arrage(int no)
{
    for (int i = 0; i < n; i++){
        if(!is_used[i]){
            used[no] = unused[i];
            is_used[i] = true;
            if(no == n){
                if(sum()){
                    prt();
                    return ;
                }
            }
            else arrage(no+1);
            is_used[i] = false;
        }
    }
}

signed main()
{
    cin >> n >> s;
    for (int i = 0; i < n; i++) unused[i] = i+1;
    arrage(1);
    return 0;
}