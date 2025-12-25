#include<iostream>
using namespace std;
int main()
{
int g;
cin >> g;
if(g<=100&g>=90)
{
    cout << "4.0";
}
else if (g<=89&g>=86)
{
    cout << "3.7";
}
else if(g<=85&g>=83)
{
    cout << "3.3";
}
else if(g>=80&g<=82)
{
    cout << "3.0";
}
else if(g>=76&g<=79)
{
    cout << "2.7";
}
else if(g>=73&g<=75)
{
    cout << "2.3";
}
else if(g>=70&g<=72)
{
    cout << "2.0";
}
else if(g>=66&g<=69)
{
    cout << "1.7";
}
else if(g>=63&g<=65)
{
    cout << "1.3";
}
else if(g>=60&g<=62)
{
    cout << "1.0";
}
else
{
    cout << "0";
}
return 0;
}