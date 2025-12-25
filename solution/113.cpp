#include<bits/stdc++.h>
using namespace std;
#define int long long

bool c[15],r[30],l[30];
int n,cnt = 0;

void place(int no)
{
    for (int i = 1; i <= n; i++){
        if(!c[i]){
            if(!(r[no+i-1] || l[no-i+n])){
                if(no == n) cnt++;
                else{
                    c[i] = true;
                    r[no+i-1] = true;
                    l[no-i+n] = true;
                    place(no+1);
                    c[i] = false;
                    r[no+i-1] = false;
                    l[no-i+n] = false;
                }
            }
        }
    }
}


signed main()
{
    cin >> n;
    place(1);
    cout << cnt;
    return 0;
}