#include<iostream>
//#include<stdlib.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i =0 ; i < n ; i++)
    {
        for(int j = 0 ; j <m ; j++)
        {
            cout << (char)(65+abs(i-j));
            // if(i>=j)
            // {
            //     cout << (char)(65+i-j);
            // }
            // else
            // {
            //     cout << (char)(65+j-i);
            // }
        }
        cout << endl;
    }
    return 0;
}