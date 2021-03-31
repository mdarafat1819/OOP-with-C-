#include <bits/stdc++.h>

using namespace std;

class Static
{
private:
    static int cnt;
public:
    Static()
    {
        cnt++;
    }
    void total()
    {
        cout<<cnt<<endl;
    }
};

int Static::cnt;

int main()
{
    Static obj, obj1, obj2;

    obj.total();

    return 0;
}
