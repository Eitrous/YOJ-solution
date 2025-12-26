#include<bits/stdc++.h>
const char *week[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << week[(n-1)%7];

    return 0;
}