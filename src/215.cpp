#include<iostream>
#include<stdio.h>

int main()
{
    int n,sum = 0,d,s;
    char name[105];
    std::cin >> n;
    while (n--)
    {
        scanf("%s %d %d",name,&d,&s);
        sum += d*s;
    }
    std::cout << sum;
}