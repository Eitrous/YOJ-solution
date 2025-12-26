#include<iostream>
//#include<string>
int main()
{
    long long d,h,maxbit = 0,rm,m = 0,bit = 0,flag = 1;
    //string a;
    std::cin >> d >> h;
    rm = d;
    m = h;
    while (rm >= h)
    {
        maxbit++;
        rm =  d - m;
        m *= h;
    }
    rm = d;
    for (int i = maxbit; i >= 0; i--)
    {
        bit = rm / (m/h);
        if(bit == 0 && flag){
            
        }
        else if(bit >= 10){
            std::cout << char('A'+bit-10);
        }
        else{
            std::cout << bit;
        }
        rm -= bit*(m/h);
        flag = 0;
        m /= h;
    }
    return 0;

}