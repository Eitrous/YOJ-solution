#include<bits/stdc++.h>
using namespace std;
int ary1[25],ary2[25],len1,len2;

int main()
{
    for (int i = 1; ; i++)
    {
        cin >> ary1[i];
        if(ary1[i] == -1)
        {
            len1 = i-1;
            break;
        }
    }
    for (int i = 1; ; i++)
    {
        cin >> ary2[i];
        if(ary2[i] == -1)
        {
            len2 = i-1;
            break;
        }
    }
    
    cout << len1 << endl << len2 << endl;

    for (int i = 1; i <= min(len1,len2); i++)
    {
        if(ary1[i] != ary2[i])
        {
            cout << ary1[i] - ary2[i];
            break;
        }
        if(i == min(len1,len2)) 
        {
            if(len1 == len2) cout << 0;
            else cout << "Not Comparable";
        }
    }
    
    return 0;
}