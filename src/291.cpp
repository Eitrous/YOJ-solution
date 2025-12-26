#include<bits/stdc++.h>
using namespace std;
#define int long long

int ans[2005];

void prt(int len1,int len2)
{
    int pos = max(len1,len2)+1;
    while (ans[pos] == 0) pos--;
    if(ans[pos] < 0){
        ans[0] = -1;
        pos--;
    }
    if(ans[0] == -1) cout << '-';
    for (; pos > 0; pos--) cout << ans[pos];
    return ;
}

void cus_plus(int n1[],int len1,int n2[],int len2)
{
    for (int i  = 1; i <= max(len1,len2)+1; i++){
        ans[i] += n1[i] + n2[i];
        ans[i+1] += ans[i]/10;
        ans[i] %= 10;
    }
    prt(len1,len2);
}

void cus_minus(int n1[],int len1,int n2[],int len2)
{
    for (int i = 1; i <= max(len1,len2)+1; i++){
        ans[i] += n1[i]+10 - n2[i];
        ans[i+1]--;
        ans[i+1] += ans[i]/10;
        ans[i] %= 10;
    }
    prt(len1,len2);
}

signed main()
{
    string str1,str2;
    char c;
    int sign,n1[2005],n2[2005],len1,len2;
    cin >> c >> str1 >> str2;
    len1 = str1.length(),len2 = str2.length();
    n1[0] = 1,n2[0] = 1;
    sign = (c == '+' ? 1 : -1);
    int cnt = 0;
    for (int i = len1-1; i >= 0; i--){
        if(str1[i] == '-'){
            n1[0] = -1;
            break;
        }
        n1[len1 - i] = str1[i] - '0';
    }
    for (int i = len2-1; i >= 0; i--){
        if(str2[i] == '-'){
            n2[0] = -1;
            break;  
        }
        n2[len2 - i] = str2[i] - '0';
    }
    if(sign * n2[0] == n1[0]){
        ans[0] = n1[0];
        cus_plus(n1,len1,n2,len2);
    }
    else if(n1[0] == 1) cus_minus(n1,len1,n2,len2);
    else cus_minus(n2,len2,n1,len1);

    return 0;
}