#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p1,p2,n1,n2,m1,m2;
    cin >> p1 >> p2 >> n1 >> n2;
    m1 = p1*n1 + p2*n2;
    m2 = m1;
    m1 *= (n1+n2 > 2 ? 0.7 : 0.8);
    m2 -= (m2/200)*50;
    if(m1 <= m2) cout << "1 " << fixed << setprecision(1) << double(m1);
    else cout << "2 "  << fixed << setprecision(1)<< double(m2);
    return 0;
}