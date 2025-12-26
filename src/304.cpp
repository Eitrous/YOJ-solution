#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,n,k,m,num = 0;
    cin >> a >> b >> n >> k >> m;
    if(n%2 == 1 && k%2 == 0){
        cout << 0;
        return 0;
    }
    for (int i = a; i < b+1; i++)
    {
        if(i%10 != n || i < pow(10,m-1) || i >= pow(10,m)) continue;
        if(i%k == 0) num++;
    }
    cout << num;
    return 0;
}