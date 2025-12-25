#include<iostream>
using namespace std;
int main()
{
    double sn = 0;
    int k;
    long long i = 0;
    cin >> k;
    while (sn <= k)
    {
        i++;
        sn += 1.0/i;
    }
    cout << i;
    return 0;
    
}