#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int m,n;
int ack(int m,int n)
{
    if(m==0)
    {
        return ++n;
    }
    else if(n==0)
    {
        return ack(m-1,1);
    }
    else
    {
        return ack(m-1,ack(m,n-1));
    }

}

int main()
{
    //int m,n;
    cin >> m >> n;
    cout << ack(m,n);
    return 0;
}