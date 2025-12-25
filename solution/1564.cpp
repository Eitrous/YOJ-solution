#include<bits/stdc++.h>
#define int long long

int dorm_num;

struct  dormitory
{
    std::string name;
    int memnum = 0;
    int mpsum = 0;
    struct member
    {
        std::string name;
        int mp = 0;
    }mem[101];
    void mpcount()
    {
        for (int i = 0; i < memnum; i++)
        {
            mpsum += mem[i].mp; 
        }
    }
    
}dorm[51];

int match(std::string name)
{
    int ret;
    for (int i = 1; i <= dorm_num; i++)
    {
        if(dorm[i].name == name)
        {
            ret = i;
            break;
        }
    }
    return ret;
}

signed main()
{
    
    std::cin >> dorm_num;
    for (int i = 1; i <= dorm_num; i++)
    {
        std::cin >> dorm[i].name;
    }

    int membernum,tmpmp,count = 0;
    std::string tmpname,dorm_n,pre_dorm_n = "gensokyo";
    std::cin >> membernum;
    for (int i = 0; i < membernum; i++)
    {
        std::cin >> tmpname >> tmpmp >> dorm_n;
        if(dorm_n != pre_dorm_n) count++;
        dorm[count].mem[dorm[count].memnum].name = tmpname;
        dorm[count].mem[dorm[count].memnum++].mp = tmpmp;
        pre_dorm_n = dorm_n;
    }
    for (int i = 1; i <= dorm_num; i++)
    {
        dorm[i].mpcount();
    }
    
    int battle_num;
    std::cin >> battle_num;
    
    std::string name1,name0,tmpn;
    for (int i = 0; i < battle_num; i++)
    {
        std::cin >> tmpn;
        size_t pos = tmpn.find("->");
        int no1 = match(tmpn.substr(0,pos));
        int no2 = match(tmpn.substr(pos + 2));
        if(dorm[no1].mpsum > dorm[no2].mpsum)
        {
            dorm[0] = dorm[no1];
            dorm[no1] = dorm[no2];
            dorm[no2] = dorm[0];
            dorm[0].name = dorm[no1].name;
            dorm[no1].name = dorm[no2].name;
            dorm[no2].name = dorm[0].name;
        }
    }
    
    for (int i = 1; i <= dorm_num; i++)
    {
        std::cout << dorm[i].name << ' ';
        for (int j = 0; j < dorm[i].memnum; j++)
        {
            std::cout << dorm[i].mem[j].name << ' ';
        }
        std::cout << std::endl;
    }
    
    return 0;
}