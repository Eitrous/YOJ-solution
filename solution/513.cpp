#include<bits/stdc++.h>
using namespace std;
#define int long long

int num[20],m,maxsum = 0,len,p[20];
bool ocp[20];

int sum()
{
    int s = 0,tmp;
    p[m+1] = len;
    for (int i = 0; i <= m; i++){
        tmp = 0;
        for (int j = p[i]; j < p[i+1]; j++){
            tmp = tmp*10 + num[j];
        }
        s += tmp;
    }
    return s;
}

void pls(int no,int stt)
{
    for (int i = stt; i < len; i++){
        if(!ocp[i]){
            ocp[i] = true;
            p[no] = i;
            if(no == m) maxsum = max(maxsum,sum());
            else pls(no+1,i+1);
            ocp[i] = false;
        }
    }
}

signed main()
{
    string str;
    cin >> m >> str;
    len = str.length();
    for (int i = 0; i < len; i++) num[i] = str[i]-'0';
    pls(1,1);
    cout << maxsum;
    return 0;
}