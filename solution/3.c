#include<stdio.h>
int main()
{
    long a;
    long b;
    scanf("%d %d",&a,&b);
    if(a>=b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}