#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main()
{
    int day,month,year,temp = 0,flag = 1;
    string inpt;
    cin >> inpt;
    int len = inpt.length();
    for (int i = 0; i < len; i++)
    {
        if(!(inpt[i] <= '9' && inpt[i] >= '0')) flag = 0;
    }
    if(flag)
    {
        cout << inpt;
        return 0;
    }
    
    if(inpt[0] > '9')
    {
        switch (inpt[0])
        {

        case 'F':
            month = 2;
            break;
        case 'M':
            if(inpt[2] == 'r') month = 3;
            else month = 5;
            
            break;
        case 'A':
            if(inpt[1] == 'p') month = 4;
            else month = 8;
            break;
        case 'J':
            if(inpt[1] == 'a') month = 1;
            else if(inpt[2] == 'n') month = 6;
            else month = 7;
            break;
        case 'S':
            month = 9;
            break;
        case 'O':
            month = 10;
            break;
        case 'N':
            month = 11;
            break;
        case 'D':
            month = 12;
            break;
        }
        scanf("%d,%d",&day,&year);
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if(inpt[i] <= '9' && inpt[i] >= '0')
            {
                temp *= 10;
                temp += inpt[i]-'0';
            }
        }
        if(temp > 99)
        {
            temp *= 10;
            year = temp + (inpt[3] - '0');
            temp = 0;
            for (int i = 4; i < 7; i++)
            {
                if(inpt[i] <= '9' && inpt[i] >= '0')
                {
                    temp *= 10;
                    temp += inpt[i]-'0';
                }
            }
            month = temp;
            temp = 0;
            for (int i = len - 2; i < len; i++)
            {
                if(inpt[i] <= '9' && inpt[i] >= '0')
                {
                    temp *= 10;
                    temp += inpt[i]-'0';
                }
            }
            day = temp;
            
        }
        else
        {
            
            temp = 0;
            for (int i = 0; i < 2; i++)
            {
                if(inpt[i] <= '9' && inpt[i] >= '0')
                {
                    temp *= 10;
                    temp += inpt[i]-'0';
                }
            }
            month = temp;
            temp = 0;

            for (int i = len - 4; i < len; i++)
            {
                if(inpt[i] <= '9' && inpt[i] >= '0')
                {
                    temp *= 10;
                    temp += inpt[i]-'0';
                }
            }
            year = temp;
            temp = 0;
            for (int i = len - 7; i < len - 5; i++)
            {
                if(inpt[i] <= '9' && inpt[i] >= '0')
                {
                    temp *= 10;
                    temp += inpt[i] - '0';
                }
            }
            day = temp;
            
            
        }
        
    }
    if(month < 10) 
    {
        if(day < 10) printf("%d0%d0%d",year,month,day);
        else printf("%d0%d%d",year,month,day);
    }
    else
    {
        if(day < 10) printf("%d%d0%d",year,month,day);
        else printf("%d%d%d",year,month,day);
    }
    

    return 0;
}