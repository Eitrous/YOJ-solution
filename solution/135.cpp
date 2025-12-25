#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100005;
string idty[N];

bool cmp(string a,string b)//1: a>b
{
    //int mrk = -1;
    // for (int i = 6; i <= 13; i++){
    //     if(a[i] > b[i]){
    //         mrk = 1;
    //         break;
    //     }
    //     else if(a[i] < b[i]){
    //         mrk = 0;
    //         break;
    //     }
    // }

    // if(mrk != -1) return mrk;//(mrk == 1 ? 1 : 0);
    // else return (a.compare(b) > 0 ? 1 : 0);
    if(a.compare(6,8,b,6,8) != 0) return (a.compare(6,8,b,6,8) > 0 ? 1 : 0);
    else return (a.compare(b) > 0 ? 1 : 0);
}

int partition(int l,int r)
{
    string k = idty[l];
    int pl = l,pr = r;
    do{
        while (cmp(k,idty[pr]) && pr > pl) pr--;
        if(pr > pl){
            idty[pl] = idty[pr];
            pl++;
        }
        while (cmp(idty[pl],k) && pl < pr) pl++;
        if(pr > pl){
            idty[pr] = idty[pl];
            pr--;
        }
    }while (pl != pr);
    idty[pl] = k;
    return pl;
}

void qsort(int l,int r)
{
    int mid;
    if(l >= r) return;
    else{
        mid = partition(l,r);
        qsort(l,mid-1);
        qsort(mid+1,r);
        return ;
    }
    
}

signed main()
{
    int t;cin >> t;
    for (int i = 0; i < t; i++) cin >> idty[i];
    qsort(0,t-1);
    for(int i=0; i < t; i++) cout << idty[i] << '\n';
    return 0;
}