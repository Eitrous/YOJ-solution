#include<bits/stdc++.h>

struct student
{
    int no;
    std::string name;
    char sex;
    int age;
    int num;
}s1,s2,s3;


int main()
{
    int m1 = 0,m2 = 0;
    std::cin >> s1.no >> s1.name >> s1.sex >> s1.age >> s1.num;
    std::cin >> s2.no >> s2.name >> s2.sex >> s2.age >> s2.num;
    std::cin >> s3.no >> s3.name >> s3.sex >> s3.age >> s3.num;
    std::vector<int> vec = {s1.num,s2.num,s3.num};
    std::sort(vec.begin(),vec.end());
    for (int i = 2; i >= 0; i--)
    {
        if(vec[i] == s1.num && !m1) 
        {
            std::cout << s1.no << ',' << s1.name << ',' << s1.sex << ',' << s1.age << ',' << s1.num << std::endl;
            m1 = 1;
        }
        else if(vec[i] == s2.num && !m2) 
        {
            std::cout << s2.no << ',' << s2.name << ',' << s2.sex << ',' << s2.age << ',' << s2.num << std::endl;
            m2 = 1;
        }
        else std::cout << s3.no << ',' << s3.name << ',' << s3.sex << ',' << s3.age << ',' << s3.num << std::endl;
    }
    return 0;
}