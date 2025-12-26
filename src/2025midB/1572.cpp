#include<iostream>
using namespace std;
long long matrix[205][205];
int main()
{
    int n;cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> matrix[i][j];
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(i == j || i+j == n+1) cout << matrix[i][n+1-j] << ' ';
            else cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}