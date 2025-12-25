#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,base_s,base_t,len,pos,tmp,no = 1;
    long long decnum;
    string sl,tl,snum;
    cin >> n;
    while (n--)
    {
        decnum = 0;
        string tnum;
        cin >> snum >> sl >> tl;
        base_s = sl.length();
        base_t = tl.length();
        len = snum.length();
        for (int i = 0; i < len; i++)
        {
            pos = 0;
            for ( ; pos < base_s; pos++)
            {
                if(snum[i] == sl[pos]) break;
            }
            
            decnum = decnum*base_s+pos;
        }

        if(decnum == 0)
        {
            cout <<"Case #" << no++ << ": ";
            cout << tl[0] << endl;
            continue;
        }
        for (int i = 0; decnum != 0 ; i++)
        {
            tmp = decnum%base_t;
            tnum += tl[tmp];
            decnum /= base_t;
        }
        
        cout << "Case #" << no++ << ": ";
        for (int i = tnum.length() - 1; i >= 0; i--)
        {
            cout << tnum[i];
        }
        cout << endl;
    }
    return 0;
}