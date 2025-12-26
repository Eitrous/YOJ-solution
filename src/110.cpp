#include<bits/stdc++.h>

int main()
{
    std::string str1,str2;
    std::cin >> str1;
    str2 = str1;
    std::reverse(str2.begin(),str2.end());
    if(str1 == str2) std::cout << "Yes";
    else std::cout <<"No";
    return 0;
}