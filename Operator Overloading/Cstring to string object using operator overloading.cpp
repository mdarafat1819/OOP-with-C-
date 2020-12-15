#include <bits/stdc++.h>

#define SIZE 1000

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
    void show()
    {
        cout<<str<<endl;
    }
    operator char*()
    {
        return str;
    }
};

int main()
{
    String s1;
    char str[] = "Yeasin";

    s1 = str;

    s1.show();

    strcpy(str, s1);

    cout<<str<<endl;

    return 0;
}
