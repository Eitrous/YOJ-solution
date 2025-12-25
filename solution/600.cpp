#include<iostream>

int main()
{
    int a,b,c,d,num1 = 0,num2 = 0,num3 = 0,dn = 0;
    std::cin >> a >> b >> c >> d;
    num1 += d/a;
    num2 += d/a;
    num3 += d/a;
    while (num2 >= b || num3 >= c)
    {
        dn = num2/b + num3/c;
        num1 += dn;
        num2 -= (num2/b)*b;
        num3 -= (num3/c)*c;
        num2 += dn;
        num3 += dn;
    }
    std::cout << num1;
    return 0;
    
}