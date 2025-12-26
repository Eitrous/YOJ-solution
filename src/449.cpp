#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    printf("%15d\n",num);
    printf("%15u\n",num);
    printf("%15o\n",num);
    printf("%15x",num);
    return 0;
}