// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     if(n == 3 ) cout << 'C';
//     else if(n== 5) cout << 'G';
//     else cout << "DONTKNOW";
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
char name[10] = "ABCDEFGH";
int main()
{
    int target,solu[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},pos;
    for ( target = 1; target <= 8; target++)
    {
        pos = (target == 8 || target == 6) + (target == 2) + (target == 7) + (target != 2) + (target != 8 && target != 6) + (target != 6 && target != 8) + (target != 3) + (target == 8 || target == 6);
        if(solu[pos] != -1) solu[pos] = -2;
        else solu[pos] = target;
    }
    
    int n;
    cin >> n;
    if(solu[n] < 0) cout << "DONTKNOW";
    else cout << name[solu[n]-1];
    return 0;
}