#include <stdio.h>

void word(char *s){
//____qcodep____

    bool isprime[105];
    isprime[0] = isprime[1] = true;
    for (int i = 2; i < 105; i++) isprime[i] = false;
    for (int i = 2; i*2 < 105; i++){
        for (int j = i*2; j < 105; j += i) isprime[j] = true;
    }

    int maxn = 0, minn = 0, cnt[30];
    for (int i = 0; i < 30; i++) cnt[i] = 0;
    while (*s != '\0'){
        cnt[*s-97]++;
        s++;
    }
    for (int i = 0; i < 30; i++){
        if(cnt[i] > maxn) maxn = cnt[i];
        if(cnt[i] != 0){
            if(minn == 0) minn = cnt[i];
            else if(cnt[i] < minn) minn = cnt[i];
        }
    }
    if(!isprime[maxn-minn]) printf("Lucky Word\n%d",maxn-minn);
    else printf("No Answer\n0");
}

int main(void){
    char s[102];
    scanf("%s",s);
    word(s);
    return 0;
}
