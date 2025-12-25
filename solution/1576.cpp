#include <stdio.h>

int F(int n) {
    //____qcodep____
    if(n == 1 || n == 2) return 1;
    else if(n == 0) return 0;
    else return F(n-1) + F(n-2);
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d\n", F(n));
    return 0;
}