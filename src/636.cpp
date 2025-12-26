#include<bits/stdc++.h>
#define i64 long long
using namespace std;

struct Rule
{
    int dice[6];
    int score;
}rule[13] = {
    {{2,0,0,4,0,0},2048},
    {{0,0,0,6,0,0},1024},
    {{6,0,0,0,0,0},512},
    {{0,6,0,0,0,0},256},
    {{0,0,0,5,0,0},128},
    {{0,5,0,0,0,0},64},
    {{0,0,0,4,0,0},32},
    {{1,1,1,1,1,1},16},
    {{0,0,0,3,0,0},8},
    {{0,4,0,0,0,0},4},
    {{0,0,0,2,0,0},2},
    {{0,0,0,1,0,0},1}
};


int cpt(int dice[])
{
    
    for (int i = 0; i < 13; i++)
    {
        bool flag = 1;
        for (int j = 0; j < 6; j++)
        {
            if(dice[j] < rule[i].dice[j]) flag = 0;
        }
        if(flag) return rule[i].score;
    }
    return 0;
}

int main()
{
    int n,dscore,score = 0,tmp;
    cin >> n;
    while (n--)
    {
        int dice[6] = {0};
        for (int i = 0; i < 6; i++)
        {
            cin >> tmp;
            dice[tmp-1]++;
        }
        
        dscore = cpt(dice);
        if(dscore == 0) break;
        else score += dscore;
    }
    
    printf("%x",score);

    return 0;
}