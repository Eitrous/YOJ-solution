#include<bits/stdc++.h>

int main()
{
    std::string str;
    std::cin >> str;
    int len = str.length();
    std::cout << str[len-1];
    for (int i = 0; i < len-1; i++)
    {
        std::cout << str[i];
    }
    return 0;
}