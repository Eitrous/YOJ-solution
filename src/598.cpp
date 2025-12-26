#include<bits/stdc++.h>
using namespace std;

char *checkSubstr(char s1[],char s2[])
{
    int len = strlen(s1);
    sort(s1,s1+len);
    char s3[220] = "";
    for(int  i = 0; i <= strlen(s2)-strlen(s1); i++){
        strncpy(s3,s2+i,len);
        sort(s3,s3+len);
        if(!strcmp(s1,s3)) return s2 + i; 
    }
    return NULL;
}

int main()

{

    char s1[220], s2[220];

    char *pRes = NULL;

    scanf("%s%s", s1, s2);

    pRes = checkSubstr(s1, s2); 

    if ( pRes == NULL )

        printf("false ");

    else{

        pRes[strlen(s1)] = '\0';

        printf("%s", pRes);

    }

    return 0;

}