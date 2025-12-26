#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>=b) return a;
    else return b;
}
int main()
{
    int a,b,t;
    cin >> a >> b;
    for (int i = max(a,b); i <= a*b; i++)
    {
        if(i%a == 0 && i%b == 0){
            t = i;
            break;
        } 
    }
    cout << t;
}