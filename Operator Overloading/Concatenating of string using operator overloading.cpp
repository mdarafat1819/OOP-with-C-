///Concatenating of String Using Operator Overloading

#include <bits/stdc++.h>

#define SIZE 10000

using namespace std;

class String
{
private:
    char str[SIZE];
public:
    String()
    {
       strcpy(str, "");
    }
    String(char s[])
    {
       strcpy(str, s);
    }
    void show() const
    {
        cout<<str<<endl;
    }
    String operator + (String s)
    {
        char temp[SIZE];
        strcpy(temp, strcat(strcat(str, " "), s.str));
        return String(temp);
    }
     String operator += (String s)
    {
        char temp[SIZE];
        strcpy(temp, strcat(strcat(str, " "), s.str));
        return String(temp);
    }
    ~String()
    {
        ///No Body
    }
};

int main()
{
    String str1("Yeasin"), str2("Arafat"), str3;

    str1.show();
    str2.show();

    str3 = str1 + str2;
    str3.show();

    str3 += str3;
    str3.show();

    return 0;
}
