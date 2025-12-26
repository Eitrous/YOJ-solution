#include<iostream>
#include<cmath>
using namespace std;
// int main()
// {
//     long i,n,num1,num2,max2,sum=1;
//     cin >> n;
//     max2 = n/2;
//     for(i=1;i<=max2;i++)
//     {
//         sum += (tgamma(n-i+1))/(tgamma(i+1)*tgamma(n-2*i+1));
//     }
//     cout << sum;
//     return 0;

// }
long long fab(int n)
{
    if(n == 1) return 1;
    else if(n == 2) return 2;
    else return fab(n-1)+fab(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << fab(n);
    return 0;
}

//注意陌生函数的计算类型（整形or浮点）以免损失精度