#include<bits/stdc++.h>
using namespace std;
#define int long long

string cdmap[80];
int w,h,x2,y2,mindis;
bool visited[80][80];

void fdrd(int x1,int y1,int dire,int cnt)
{
    if(cnt > 10 || cnt >= mindis) return ;
    visited[y1][x1] = true;
    if(x1 > 0 && !visited[y1][x1-1] && (cdmap[y1][x1-1] == ' ' || (x1-1 == x2 && y1 == y2))){
        if(x1-1 == x2 && y1 == y2) mindis = min(mindis,cnt+(dire == 4 ? 0 : 1));
        else fdrd(x1-1,y1,4,cnt+(dire == 4 ? 0 : 1));
    }
    if(x1 < w+1 && !visited[y1][x1+1] && (cdmap[y1][x1+1] == ' ' || (x1+1 == x2 && y1 == y2))){
        if(x1+1 == x2 && y1 == y2) mindis = min(mindis,cnt+(dire == 2 ? 0 : 1));
        else fdrd(x1+1,y1,2,cnt+(dire == 2 ? 0 : 1));
    }
    if(y1 > 0 && !visited[y1-1][x1] && (cdmap[y1-1][x1] == ' ' || (x1 == x2 && y1-1 == y2))){
        if(x1 == x2 && y1-1 == y2) mindis = min(mindis,cnt+(dire == 1 ? 0 : 1));
        else fdrd(x1,y1-1,1,cnt+(dire == 1 ? 0 : 1));
    }
    if(y1 < h+1 && !visited[y1+1][x1] && (cdmap[y1+1][x1] == ' ' || (x1 == x2 && y1+1 == y2))){
        if(x1 == x2 && y1+1 == y2) mindis = min(mindis,cnt+(dire == 3 ? 0 : 1));
        else fdrd(x1,y1+1,3,cnt+(dire == 3 ? 0 : 1));
    }
    visited[y1][x1] = false;
}

signed main()
{
    cin >> w >> h;
    getchar();
    string tmp;
    for (int i = 0; i <= h+1; i++){
        if(i == 0 || i == h+1){
            for (int j = 0; j <= w+1; j++) cdmap[i] += ' ';
        }
        else{
            getline(cin,tmp);
            cdmap[i] = ' '+tmp+' ';
        }
    }
    int n; cin >> n;
    int x1,y1;
    while (n--){
        mindis = 11;
        cin >> x1 >> y1 >> x2 >> y2;
        fdrd(x1,y1,0,0);
        if(mindis < 11) cout << mindis << '\n';
        else cout << "impossible\n";
    }
    return 0;
}