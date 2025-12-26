#include<iostream>

using namespace std;
int main()
{
    char c;
    int numc;
    char C;
    cin >> c;
    if((int)c<91){
        numc = (int)c + 32;
    }
    else{
        numc = (int)c - 32;
    }
    c = (char)numc;
    cout << c <<endl;
    return 0;
} 