#include<iostream>
#include<string>
using namespace std;
int main()
{
    int lyn,wn,n,d,weekno,y,t;
    string m;
    cin >> t;
    while (t--)
    {
        cin >> y >> weekno;
        int j = 0,lyn = 0;
        for (int i = 1900; i < y; i++)
        {
            if (!(i%4) && (i%100 || !(i%400)))
            {
                lyn++;
            }
            
        }
        
        wn = (lyn+1 + 365*(y-1900))%7;
        n = (3-wn)+7*(weekno-1);
        if(!(y%4) && (y%100 || !(y%400))) j = 1;
        if((y%4 && n > 365) || (j == 1 && n > 366) || n <= 0)
        {
            cout << -1 << endl;
            continue; 
        }
        if(j == 0){
            if(n<32) {m = "01";d = n;} 
            else if(n<60) {m = "02";d = n-31;} 
            else if(n<91) {m = "03";d = n-59;}
            else if(n<121) {m = "04";d = n-90;}
            else if(n<152) {m = "05";d = n-120;}
            else if(n<182) {m = "06";d = n-151;}
            else if(n<213) {m = "07";d = n-181;}
            else if(n<244) {m = "08";d = n-212;}
            else if(n<274) {m = "09";d = n-243;}
            else if(n<305) {m = "10";d = n-273;}
            else if(n<335) {m = "11";d = n-304;}
            else if(n<366) {m = "12";d = n-334;}
        }
        else{
            if(n<32) {m = "01";d = n;} 
            else if(n<61) {m = "02";d = n-31;}
            else if(n<92) {m = "03";d = n-60;}
            else if(n<122) {m = "04";d = n-91;}
            else if(n<153) {m = "05";d = n-121;}
            else if(n<183) {m = "06";d = n-152;}
            else if(n<214) {m = "07";d = n-182;}
            else if(n<245) {m = "08";d = n-213;}
            else if(n<275) {m = "09";d = n-244;}
            else if(n<306) {m = "10";d = n-274;}
            else if(n<336) {m = "11";d = n-305;}
            else if(n<367) {m = "12";d = n-335;}
        }
        if(d < 10) cout << y << m << '0' << d << endl;
        else cout << y << m << d << endl;
        //cout << lyn;
    }
    return 0;
}