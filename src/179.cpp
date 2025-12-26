#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2*n-1; i++)
    {
        if(i == 0 || i == 2*n-2){
            for (int j = 0; j < n-1; j++)
            {
                cout << ' ';
            }
            for (int j = 0; j < n; j++)
            {
                cout << '*';
            }
            cout << endl;
        }
        else if(i < n){
            for (int j = 0; j < n-i-1; j++)
            {
                cout << ' ';
            }
            cout << '*';
            for (int j = 0; j < n+2*(i-1); j++)
            {
                cout << ' ';
            }
            cout << '*' << endl;
        }
        else{
            for (int j = i-n+1; j > 0; j--)
            {
                cout << ' ';
            }
            cout << '*';
            for (int j = n+2*(2*n-3-i); j > 0; j--)
            {
                cout << ' ';
            }
            cout << '*' << endl;
            
        }
    }
    return 0;
}