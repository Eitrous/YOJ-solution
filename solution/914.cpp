#include <iostream>
#include <string.h>
using namespace std;

class CMyString
{
public:
    CMyString(char *str)
    {
        m_pString = new char[strlen(str) + 1];
        strcpy(m_pString, str);
    }

    //____qcodep____
    CMyString(const CMyString &str)
    {
        m_pString = new char[strlen(str.m_pString) + 1];
        strcpy(m_pString, str.m_pString);
    }

    ~CMyString() // 析构函数
    {
        if (m_pString != NULL)
        {
            delete[] m_pString;
            m_pString = NULL;
        }
    }

    char *m_pString;
};

int main()
{
    int n;
    char string[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> string;
        CMyString str1(string);
        CMyString str2(str1);
        cout << str2.m_pString << endl;
    }

    return 0;
}