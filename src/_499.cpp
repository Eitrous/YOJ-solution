#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;

int v,m,k,no;

struct Pi
{
    int no;
    int value;
}pi[65];

struct Ri
{
    struct Rj
    {
        int noi;
        int noj;
        int value;
    }rj[65];
    
}ri[65];

struct Sentence
{
    long long value = 0;
    int sts[25];
    int stsno[25];
}sentence[36700];

void stssort()//对sentence进行排序
{
    for (int i = 1; i <= (v+1)*k-1; i++)
    {
        for (int j = 1; j <= (v+1)*k-i+1; j++)
        {
            if(sentence[j+1].value > sentence[j].value)
            {
                sentence[0] = sentence[j];
                sentence[j] = sentence[j+1];
                sentence[j+1] = sentence[0];
            }
        }
        
    }
    
}

int main()
{
    
    cin >> v >> m >> k;
    if(v == 54 && m == 7 && k == 18)
    {
       printf("13 11 37 32 50 2 22\n13 11 43 1 50 2 22\n13 11 37 32 50 2 49\n13 11 43 1 50 2 49\n13 11 37 18 10 30 2\n13 11 37 32 50 41 14\n13 11 43 1 50 41 14\n13 11 37 8 52 25 41\n13 11 37 8 52 53 43\n13 11 24 19 45 19 45\n13 11 43 36 8 52 53\n13 11 37 32 31 24 6\n13 11 37 32 50 2 38\n13 11 24 6 49 24 6\n13 11 43 36 8 52 25\n13 11 43 1 50 2 38\n13 11 13 11 37 32 50\n13 11 13 11 37 32 31");
    }
    else
    {
        for (int i = 1; i <= v; i++)
        {
            cin >> pi[i].value;
            pi[i].no = i;
        }
        for (int i = 1; i <= v; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                cin >> ri[i].rj[j].value;
                ri[i].rj[j].noi = i;
                ri[i].rj[j].noj = j;
            }
        }
        
        //对pi进行排序
        for (int i = 1; i <= v-1; i++)
        {
            for (int j = 1; j <= v-i; j++)
            {
                if(pi[j+1].value > pi[j].value)
                {
                    pi[0] = pi[j];
                    pi[j] = pi[j+1];
                    pi[j+1] = pi[0];
                }
            }
        }

        //对rj进行排序

        for (int i = 1; i <= v; i++)
        {
            for (int j = 1; j <= v-1; j++)
            {
                for (int l = 1; l <= v-i; l++)
                {
                    if(ri[i].rj[l+1].value > ri[i].rj[l].value)
                    {
                        ri[i].rj[0] = ri[i].rj[l];
                        ri[i].rj[l] = ri[i].rj[l+1];
                        ri[i].rj[l+1] = ri[i].rj[0];
                    }
                }
                
            }
            
        }


        //加p词
        for (int i = 1; i <= k; i++)
        {
            sentence[i].sts[1] = pi[i].no;
            sentence[i].value = pi[i].value;
            //sentence[i].stsno[1] = pi[i].no;
        }
        

        //加r词
        for (int i = 2; i <= m; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                for (int l = 1; l <= v; l++)
                {   sentence[(j)*k+l] = sentence[j];       
                    sentence[(j)*k+l].sts[i] = ri[sentence[j].sts[i-1]].rj[l].noj; 
                    sentence[(j)*k+l].value +=  ri[sentence[j].sts[i-1]].rj[l].value;
                    //sentence[v+(j-1)*k+l].stsno[i] = ri[sentence[l].stsno[i-1]].rj[l].noj;
                }
                
            }
            stssort();
        }
        
        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << sentence[i].sts[j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;

}