#include<bits/stdc++.h>

std::string beforestr,afterstr;
void cmdC()
{
    int num = 0,pos;
    std::string substr;
    std::cin >> substr;
    pos = beforestr.find(substr);
    while (pos != -1)
    {
        num++;
        beforestr.erase(0,pos+substr.length());
        pos = beforestr.find(substr);
    }
    std::cout << num;
    
}

void cmdD()
{
    int pos;
    std::string substr;
    std::cin >> substr;
    pos = beforestr.find(substr);
    if(pos == -1) std::cout << beforestr;
    else 
    {
        beforestr.erase(pos,substr.length());
        std::cout << beforestr;
    }
}

void cmdI()
{
    int pos,prepos,i = 0;
    afterstr = beforestr;
    std::string substr1,substr2;
    std::cin >> substr1 >> substr2;
    pos = beforestr.find(substr1);
    if(pos == -1) 
    {
        std::cout << beforestr;
        return;
    }
        while (pos != -1)
    {
        
        prepos = pos+i*substr1.length();
        i++;
        beforestr.erase(pos,substr1.length());
        pos = beforestr.find(substr1);
    }
    afterstr.insert(prepos,substr2);
    std::cout << afterstr;
}

void cmdR()
{
    int pos,prepos,i = 0;
    std::string str1,str2;
    std::cin >> str1 >> str2;
    afterstr = beforestr;
    pos = beforestr.find(str1);
    if(pos == -1)
    {
        
        std::cout << beforestr;
        return;
    }
        while (pos != -1)
    {
        
        prepos = pos+i*str2.length();
        i++;
        afterstr.erase(prepos,str1.length());
        beforestr.erase(pos,str1.length());
        afterstr.insert(prepos,str2);
        pos = beforestr.find(str1);
    }
    std::cout << afterstr;

}

int main()
{
    std::getline(std::cin,beforestr);
    char cmd;
    std::cin >> cmd;
    switch (cmd)
    {
        case 'C':
            cmdC();
            break;
        
        case 'D':
            cmdD();
            break;

        case 'I':
            cmdI();
            break;

        case 'R':
            cmdR();
            break;

    }

    return 0;
}