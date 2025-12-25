#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 100005;
bool prime[MAXN];

void calcu_prime()
{
    for (int i = 2; i <= sqrt(MAXN); i++){
        if(!prime[i]){
            for (int j = i*2; j <= MAXN; j += i) prime[j] = true;
        }
    }
}

int is_palin(int n)
{
    char num[10];
    sprintf(num,"%d",n);
    int len = strlen(num),sum = 0;
    for (int i = 0; i <= (len%2 ? len/2 : len/2-1); i++){
        if(num[i] != num[len-i-1]) return 0;
        sum += (num[i] - '0')*2;
        if(len%2 && i == len/2) sum -= num[i]-'0';
    }
    return sum;
}

signed main()
{
    calcu_prime();
    int m,n,maxn = 0,maxsum = 0,tmp;
    cin >> m >> n;
    for (int i = m; i <= n; i++){
        if(!prime[i]){
            tmp = is_palin(i);
            if(tmp > maxsum){
                maxn = i;
                maxsum = tmp;
            }
        }
    }

    if(maxsum == 0) cout << "0 0";
    else cout << maxn << ' ' << maxsum;

    return 0;
}