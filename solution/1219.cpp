#include<bits/stdc++.h>
using namespace std;
char SUIT[4] = {'D','C','H','S'};
char NUM[13] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};

int main()
{
    int t,n,suit,num;
    string s;
    cin >> t;
    while (t--)
    {
        int poker[4][13] = {{0}};
        cin >> n;
        while (n--)
        {
            cin >> s;
            for (int i = 0; i < 4; i++)
            {
                if(s[0] == SUIT[i]) 
                {
                    suit = i;
                    break;
                }
            }
            for (int i = 0; i < 13; i++)
            {
                if(s[1] == NUM[i])
                {
                    num = i;
                    break;
                }
            }
            
            poker[suit][num]++;
        }
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 13; j++)
            {
                if(poker[i][j] == 0) count++;
            }
            
        }
        
        cout << count << endl;
    }
    
    return 0;
}