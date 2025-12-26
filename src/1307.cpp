#include<stdio.h>
#include<iostream>
using namespace std;
#define int long long
const int N = 1005;
int a[N],b[N];
signed main()
{
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    
    int pos = 0,bstpos,coin,maxcoin;
    for (int i = 0; i < n; i++){
        pos = i;
        coin = 0;
        for (int j = 0; j < m; j++) {
            pos = (pos+b[j])%n;
            coin += a[pos];
        }
        if(i == 0){
            bstpos = pos;
            maxcoin = coin;
        }
        else if(coin > maxcoin){
            maxcoin = coin;
            bstpos = i;
        } 
    }
    
    cout << bstpos << ' ' << maxcoin;

    return 0;
}