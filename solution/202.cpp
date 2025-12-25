#include<bits/stdc++.h>
using namespace std;
#define int long long
int pfr[15][15],ocp[15],n,cnt = 0;

struct ANS
{
    int ans[15] = {0};
}ans[5005];

void distu(int k)
{
    if(k == n-1){
        for(int i = 0; i < n; i++){
            if(ocp[i] == 0 && pfr[k][i] == 1) ans[cnt].ans[k] = i+1;
        }
        if(ans[cnt].ans[k] != 0){
            cnt++;
            ans[cnt] = ans[cnt-1];
            ans[cnt].ans[k] = 0;
        }
        return ;
    }
    else{
        for(int i = 0; i < n; i++){
            if(ocp[i] == 0 && pfr[k][i] == 1){
                ans[cnt].ans[k] = i+1;
                ocp[i] = 1;
                distu(k+1);
                ocp[i] = 0;
            }
        }
    }
}


signed main()
{
    cin >> n;
    string str;
    for(int i = 0; i < n; i++){
        cin >> str;
        for(int j = 0; j < n; j++) pfr[i][j] = str[j]-'0';
    }
    distu(0);
    if(cnt == 0) printf("NO");
    else{
        printf("%d\n",cnt);
        for(int i = 0; i < cnt; i++){
            for(int j = 0; j < n; j++) printf("B%d",ans[i].ans[j]);
            printf("\n");
        }
    }
    return 0;
}