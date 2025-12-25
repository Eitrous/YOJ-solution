#include<bits/stdc++.h>
using namespace std;

int n,stepcnt = 0,nextplate = 1;

void move(char t1,char t2,char tmp,int num) //t1 -> t2
{
    if(num == 1) printf("[step %d] move plate %d# from %c to %c\n",++stepcnt,1,t1,t2);
    else if(num > 2){
        move(t1,tmp,t2,num-1);
        printf("[step %d] move plate %d# from %c to %c\n",++stepcnt,num,t1,t2);
        move(tmp,t2,t1,num-1);
    }
    else{
        printf("[step %d] move plate %d# from %c to %c\n",++stepcnt,1,t1,tmp);
        printf("[step %d] move plate %d# from %c to %c\n",++stepcnt,2,t1,t2);
        printf("[step %d] move plate %d# from %c to %c\n",++stepcnt,1,tmp,t2);
        
    }
}

int main()
{
    cin >> n;
    move('a','c','b',n);
    printf("%d",stepcnt);
    return 0;
}