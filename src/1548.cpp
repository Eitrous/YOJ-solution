#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int dec,hex;
    char str[11];
    float flt;
    scanf("%d,%x,%10s,%f",&dec,&hex,str,&flt);
    //cout << hex;
    printf("%15d\n%-15d\n%15s\n%-15.2f",dec,hex,str,flt);
    //printf("%-15d\n",hex);
    return 0;
}