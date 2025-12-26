#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;

class Rectangle{

public:
//在下面的空格声明 Rectangle 类的成员函数
//____qcodep____
Rectangle(double X1, double Y1, double X2, double Y2);
double getC();
double getS();

private:
    //左下角坐标
    double _x1;
    double _y1;

    //右上角坐标
    double _x2;
    double _y2;

    //宽度和高度
    double _width;
    double _height;
};

//在下面的空格实现 Rectangle 类的成员函数

//____qcodep____
Rectangle::Rectangle(double X1, double Y1, double X2, double Y2) : _x1(X1), _y1(Y1), _x2(X2), _y2(Y2)
{
    _width = abs(_x2 - _x1);
    _height = abs(_y2 - _y1);
}

double Rectangle::getC()
{
    return 2 * (_width + _height);
}

double Rectangle::getS()
{
    return _width * _height;
}

int main(){

    double x1, x2, y1, y2;
    cin >>x1>>y1>>x2>>y2;
    Rectangle r1(x1,y1,x2,y2);

    Rectangle r2 = r1;

//在下面的空格按题目要求输出结果

//____qcodep____

    cout << fixed << setprecision(2) << r1.getC() << '\n';
    cout << fixed << setprecision(2) << r1.getS() << '\n';
    cout << fixed << setprecision(2) << r1.getC() + r2.getC() << '\n';
    cout << fixed << setprecision(2) << r1.getS() + r2.getS() << '\n';

    return 0;
}
