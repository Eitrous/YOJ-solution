#include<bits/stdc++.h>

int main()
{
    std::string s1,s2;
    std::cin >> s1 >> s2;
    if(s1.size() < s2.size())
    {
        std::cout << "false";
        return 0;
    }
    if((s1 +s1).find(s2) != std::string::npos)
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }
    return 0;
}