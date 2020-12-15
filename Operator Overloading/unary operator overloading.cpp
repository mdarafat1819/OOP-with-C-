#include <bits/stdc++.h>

using namespace std;

class Counter
{
private:
    int cnt;
public:
    Counter() : cnt(0)
    {
        ///no body
    }
    Counter(int c) : cnt(c)
    {
        ///no body
    }
    int get_count()
    {
        return cnt;
    }

    Counter operator++()
    {
        ++cnt;
        /*Counter temp;
        temp.cnt = cnt;
        return temp;
        */
        return Counter(cnt);
    }
};

int main()
{
    Counter c1, c2;

    ++c1;
    ++c1;
    ++c2;

    cout<<c1.get_count()<<endl;
    cout<<c2.get_count()<<endl;

    c2 = ++c1;

    cout<<c1.get_count()<<endl;
    cout<<c2.get_count()<<endl;

    return 0;
}
