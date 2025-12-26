#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 105;
int m[16];

struct Music{
    int v[16] = {0};
    int no;
    int dis = 0;
    int len;
    void disculcu(){
        for(int i = 0; i < 16; i++) dis += (v[i]-m[i])*(v[i]-m[i]);
    }
}music[N];

bool cmp(Music m1,Music m2)
{
    if(m1.dis == m2.dis) return m1.no > m2.no;
    else return m1.dis > m2.dis;
}

signed main()
{
    int n0;cin >> n0;
    int tmp;
    for(int i = 0; i < n0; i++){
        cin >> tmp;
        m[tmp/16]++;
    }
    int n,k;cin >> n >> k;
    //int len;
    for(int i = 1; i <= n; i++){
        music[i].no = i-1;
        cin >> music[i].len;
        for(int j = 0; j < music[i].len; j++){
            cin >> tmp;
            music[i].v[tmp/16]++;
        }
        music[i].disculcu();
    }

    for(int i = 1; i <= n-1; i++){
        for(int j = 1; j <= n-i; j++){
            if(cmp(music[j],music[j+1])){
                music[0] = music[j];
                music[j] = music[j+1];
                music[j+1] = music[0];
            }
        }
    }

    for(int i = 1; i <= k; i++) cout << music[i].no << ' ';

    return 0;
}