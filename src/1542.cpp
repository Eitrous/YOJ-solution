#include<iostream>
#include<string>
//#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
int main()
{
    // string hex = "FFF";
    // string oct = "17777";
    unsigned long maxdec1 = 4294967294;
    unsigned long long maxdec2 = 1844674407370955161;
    cout << stoi("FFF",nullptr,16) << endl;
    cout << stoi("17777",nullptr,8) << endl;
    cout << maxdec1 << endl;
    cout << maxdec2 << 4 << endl;
    return 0;
}