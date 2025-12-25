#include<bits/stdc++.h>
using namespace std;
const int N = 105;
int a[N],n,cnt = 0;

void electsort(int begin)
{
    if(begin == n-1) return ;
    int m = begin,tmp,b[N];
    for(int i=begin+1; i < n;i++){
        if(a[i] < a[m]) m = i;
    }
    if(m == begin) electsort(begin+1);
    else{
        swap(a[begin],a[m]);
        cnt++;
        for(int i=0; i < n; i++) b[i] = a[i];
        electsort(begin+1);
        printf("%d<->%d:",begin+1,m+1);
        for(int i=0; i < n; i++) cout << b[i] << ' ';
        cout << '\n';
    }
    return ;
}


signed main()
{
    cin >> n;
    for(int i=0; i < n; i++) cin >> a[i];
    electsort(0);
    cout << "Total steps:" << cnt << '\n';
    cout << "Right order:";
    for(int i=0; i < n; i++) cout << a[i] << ' ';
}