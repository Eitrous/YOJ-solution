#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,R[101][101],G[101][101],B[101][101],r[101][101],g[101][101],b[101][101],M[101][101];
    cin >> n >> m;
    char c;

    //输入数据
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c >> R[i][j] >> c >> G[i][j] >> c >> B[i][j];
            r[i][j] = R[i][j];
            g[i][j] = G[i][j];
            b[i][j] = B[i][j];
            M[i][j] = 0;
        }
        
    }
    int k = 0;
    //检测坏点
    do
    {
        k = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int num = 0;
                if(R[i][j] == 0 && G[i][j] == 0 && B[i][j] == 0 )
                {
                    if(i != 0 && (R[i-1][j] != 0 || G[i-1][j] != 0 || B[i-1][j] != 0)) num++;
                    if(i != n-1 && (R[i+1][j] != 0 || G[i+1][j] != 0 || B[i+1][j] != 0)) num++;
                    if(j != 0 && (R[i][j-1] != 0 || G[i][j-1] != 0 || B[i][j-1] != 0)) num++;
                    if(j != m-1 && (R[i][j+1] != 0 || G[i][j+1] != 0 || B[i][j+1] != 0)) num++;
                }
                M[i][j] = num;
                if(num != 0) k++;
            }
            
        }
        if(k != 0)
        {
            //处理坏点
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if(M[i][j] != 0)
                    {
                        if(i != 0 && i != n-1 && j != 0 && j != m-1)
                        {
                            r[i][j] = ceil((R[i-1][j]+R[i][j+1]+R[i+1][j]+R[i][j-1])/float(M[i][j]));
                            g[i][j] = ceil((G[i-1][j]+G[i][j+1]+G[i+1][j]+G[i][j-1])/float(M[i][j]));
                            b[i][j] = ceil((B[i-1][j]+B[i][j+1]+B[i+1][j]+B[i][j-1])/float(M[i][j]));
                        }
                        else
                        {
                            int rsum = 0,gsum = 0,bsum = 0;
                            if(i != 0){
                                rsum += R[i-1][j];
                                gsum += G[i-1][j];
                                bsum += B[i-1][j];
                            }
                            if(i != n-1){
                                rsum += R[i+1][j];
                                gsum += G[i+1][j];
                                bsum += B[i+1][j];
                            }
                            if(j != 0){
                                rsum += R[i][j-1];
                                gsum += G[i][j-1];
                                bsum += B[i][j-1];
                            }
                            if(j != n-1){
                                rsum += R[i][j+1];
                                gsum += G[i][j+1];
                                bsum += B[i][j+1];
                            }
                            r[i][j] = ceil(rsum/float(M[i][j]));
                            g[i][j] = ceil(gsum/float(M[i][j]));
                            b[i][j] = ceil(bsum/float(M[i][j]));
                        }
                    }
                }
                
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if(M[i][j] != 0)
                    {
                        R[i][j] = r[i][j];
                        G[i][j] = g[i][j];
                        B[i][j] = b[i][j];
                        M[i][j] = 0;
                    }
                }
                
            }
        }
    } while(k != 0);

    //输出图像
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("R %d G %d B %d ",R[i][j],G[i][j],B[i][j]);
        }
        cout << endl;
    }

    return 0;
}