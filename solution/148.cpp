#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,flag = 1;
    cin >> n;
    for (int i = 1; i < n/4; i++)
    {
        if(i<5 || i>=50)
        {
            for (int j = 1; j < (n-4*i)/6; j++)
            {
                for (int k = 0; k < n-4*i-6*k; k++)
                {
                    x = 2*i;
                    y = j;
                    z = 8+10*k;
                    if(((x < z && x > y && y > 0) || (z < x && x < y && z > 0)) && 2*x+6*y+z <= n && 2*x+6*y+z > 0.9*n && ( y > 9 || (y < 10 && x > 9 && x < 100 ) ))
                    {
                        cout << x << ' ' << y << ' ' << z << endl;
                        flag = 0;
                    }
                }
                
            }
            
        }
        else
        {
            for (int j = 1; j < (n-4*i)/6; j++)
            {
                for (int k = 0; k < n-4*i-6*k; k++)
                {
                    x = 2*i;
                    y = j;
                    z = 8+10*k;
                    if(((x < z && x > y && y > 0) || (z < x && x < y && z > 0)) && 2*x+6*y+z <= n && 2*x+6*y+z > 0.9*n && ( y > 9 || (y < 10 && x > 9 && x < 100 ) )) 
                    {
                        cout << x << ' ' << y << ' ' << z << endl;
                        flag = 0;
                    }
                }
            }
            
        }
        
    }
    if(flag) cout << "no answer";
    return 0;
}