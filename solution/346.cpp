#include <iostream>
using namespace std;
//____qcodep____//
#include<bits/stdc++.h>

class Complex{

public:

Complex(double re, double im = 0) : _re(re), _im(im){}

void add(Complex c)
{
    _re += c._re;
    _im += c._im;
}

void sub(Complex c)
{
    _re -= c._re;
    _im -= c._im;
}

void show()
{
    if(_re != 0 && _im != 0){
        if(_im > 0)
            printf("%g+%gi\n", _re, _im);
        else
            printf("%g%gi\n", _re, _im);
    }
    else if(_im != 0)
        printf("%gi\n", _im);
    else
        printf("%g\n", _re);
}

private:
    double _re, _im;
};

int main()
{
	double re, im;
	cin >> re >> im;
	Complex c1(re, im);		// 用re, im初始化c1
	cin >> re;
	Complex c2 = re;     		// 用实数re初始化c2

	c1.show();
	c2.show();
	c1.add(c2);         // 将C1与c2相加，结果保存在c1中
	c1.show();          // 将c1输出
	c2.sub(c1);			// c2-c1，结果保存在c2中 
	c2.show();			// 输出c2 
	
    return 0;
}
