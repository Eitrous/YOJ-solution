#include<bits/stdc++.h>

int main()
{
    int m,n,M[102][102],max = 0,sum,count = 0;
    std::cin >> m >> n;
    for (int i = 0; i < m+2; i++)
    {
        for (int j = 0; j < n+2; j++)
        {
            if(i == 0 || i == m+1 || j == 0 || j == n+1)
            {
                M[i][j] = 0;
            }
            else{
                std::cin >> M[i][j];
            }
        }
    }

    for (int i = 1; i < m+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            sum = M[i-1][j]+M[i][j+1]+M[i+1][j]+M[i][j-1]+M[i][j];
            if(sum > max){
                max = sum;
                count = 0;
            }
            if(sum == max){
                count++;
            }

        }
    }
    std::cout << max << ' ' << count << std::endl;
    for (int i = 1; i < m+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            if(M[i-1][j]+M[i][j+1]+M[i+1][j]+M[i][j-1]+M[i][j] == max)
            {
                std::cout << i-1 << ' ' << j-1 << std::endl;
            }
        }
    }
    return 0;
}