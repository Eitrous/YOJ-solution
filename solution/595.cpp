#include<bits/stdc++.h>
using namespace std;
#define int long long
//const int MAXN = ;
string str;

bool is_valid(int a,int b,int c)
{
    int num = 0;
    for(int i = 0; i <= a; i++){
        num = num*10 + (str[i]-'0');
    }
    if(num > 255) return false;
    num = 0;
    for(int i = a+1; i <= b; i++){
        num = num*10 + (str[i]-'0');
    }
    if(num > 255) return false;
    num = 0;
    for(int i = b+1; i <= c; i++){
        num = num*10 + (str[i]-'0');
    }
    if(num > 255) return false;
    num = 0;
    for(int i = c+1; i < str.length(); i++){
        num = num*10 + (str[i]-'0');
    }
    if(num > 255) return false;
    
    return true;
}

void prt(int I,int J,int K)
{
    for(int i = 0; i <= I; i++) cout << str[i];
    cout << '.';
    for(int i = I+1; i <= J; i++) cout << str[i];
    cout << '.';
    for(int i = J+1; i <= K; i++) cout << str[i];
    cout << '.'; 
    for(int i = K+1; i < str.length(); i++) cout << str[i];
    cout << '\n';  
}

void solve()
{
    cin >> str;
    int len = str.length();
    for(int i = 0; i <= len-3; i++){
        if(i == 0 || str[0] != '0')
            for(int j = i+1; j <= len-2; j++){
                if(j == i+1 || str[i+1] != '0')
                    for(int k = j+1; k <= len-1; k++){
                        if(k == j+1 || str[j+1] != '0')
                            if(k == len-1 || str[k+1] !='0')
                                if(is_valid(i,j,k)) prt(i,j,k);
                    }
            }
    }
}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}