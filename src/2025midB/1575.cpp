#include<bits/stdc++.h>
using namespace std;
#define int long long

int D,K,wdcnt = 0;

struct Word
{
    string name;
    bool ocp[205] = {false};
    int df = 0;

}word[1005];

bool cmp(string s1,string s2)
{
    for (int i = 0; i < min(s1.length(),s2.length()); i++){
        if(s1[i] != s2[i]) return s1[i] < s2[i];
    }
    return s1.length() < s2.length();
}

string lower(string str)
{
    if('0' <= str[0] && str[0] <= '9') return str;
    else{
        for (int i = 0; i < str.length(); i++){
            if(str[i] < 91) str[i] += 32;
        }
        return str;
    }
}

int is_ocp(string str)
{
    for (int i = 1; i <= wdcnt; i++){
        if(word[i].name == str) return i;
    }
    return -1;
}

signed main()
{
    cin >> D >> K;
    int n,pos;
    string tmp;
    for (int i = 1; i <= D; i++){
        cin >> n;
        for (int j = 1; j<= n; j++){
            cin >> tmp;
            tmp = lower(tmp);
            pos = is_ocp(tmp);
            if(pos == -1){
                word[++wdcnt].name = tmp;
                word[wdcnt].ocp[i] = true;
                word[wdcnt].df++;
            }
            else if(!word[pos].ocp[i]){
                word[pos].df++;
                word[pos].ocp[i] = true;
            }
        }
    }

    for (int i = 1; i <= wdcnt-1; i++){
        for (int j = 1; j <= wdcnt-i; j++){
            if((word[j+1].df > word[j].df) || (word[j+1].df == word[j].df && cmp(word[j+1].name,word[j].name))){
                word[0] = word[j];
                word[j] = word[j+1];
                word[j+1] = word[0];
            }
        }
    }

    for (int i = 1; i <= K; i++){
        cout << word[i].name << ' ' << word[i].df << '\n';
    }

    return 0;
}