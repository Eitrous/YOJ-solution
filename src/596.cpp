#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
//____qcodep____
#include<bits/stdc++.h>
char substr[220];
char *checkSubstr(char *s1,char *s2)
{   
    
    int len1 = strlen(s1),len2 = strlen(s2);
    sort(s1,s1+len1);
    if(len1 > len2) return NULL;
    for(int i = 0; i+len1 <= len2; i++){
        strncpy(substr, s2+i,len1);
        sort(substr,substr+len1);
        if(!strcmp(s1,substr)) return s2+i;
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
        printf("false\n");
    else{
        pRes[ strlen(s1) ] = '\0';
        printf("%s", pRes);
    }
    return 0;
}