#include<bits/stdc++.h>

int n1,n2;

void match(char *s1,char *s2)
{
    n1 = 0;
    n2 = 0;
    int ban[5] = {4,4,4,4,4},ban1[5] = {4,4,4,4,4},b = 0,b1 = 0;
    for (int i = 0; i < 4; i++)
    {
        if(s1[i] == s2[i])
        {
            n1++;
            n2++;
            ban1[b1] = i;
            b1++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if(i == ban1[0] || i == ban1[1] || i == ban1[2] || i == ban1[3]) continue;
        for (int j = 0; j < 4; j++)
        {
            if(s1[i] == s2[j] && j != ban[0] && j != ban[1] && j != ban[2] && j != ban[3] && j != ban1[0] && j != ban1[1] && j != ban1[2] && j != ban1[3])
            {
                n1++;
                ban[b] = j;
                b++;
                break;
            }

        }
    }
    
    
}

int main()
{
    char num[5];
    int n,m1,m2;
    char str[10000][5],tmp[5];
    std::cin >> n;
    std::cin >> num >> m1 >> m2;
    int j = 0;
    for (int i = 0; i < 10000; i++)
    {
        sprintf(tmp,"%04d",i);
        match(tmp,num);
        if(m1 == n1 && m2 == n2)
        {
            str[j][0] = tmp[0];
            str[j][1] = tmp[1];
            str[j][2] = tmp[2];
            str[j][3] = tmp[3];
            j++;
        }
    }
    while (--n)
    {
        std::cin >> num >> m1 >> m2;
        int l = 0;//j为候选数的个数
        for (int i = 0; i < j; i++)
        {
            match(str[i],num);
            if(m1 == n1 && m2 == n2)
            {
                str[l][0] = str[i][0];
                str[l][1] = str[i][1];
                str[l][2] = str[i][2];
                str[l][3] = str[i][3];
                l++;
            }
        }
        j = l;
    }
    if(j == 1) std::cout << str[0];
    else std::cout <<"Not sure";
    
    return 0;
    
}