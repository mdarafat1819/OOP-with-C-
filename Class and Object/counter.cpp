#include <bits/stdc++.h>

using namespace std;

class Counter
{
private:
    int count;
public:
    Counter()
        :count(0)
    {
    };
    void increment()
    {
        count++;
    }
    int get_count()
    {
        return count;
    }
};

int main()
{
    Counter c1;

    for(int i = 0; i < 5; i++) c1.increment();

    cout<<c1.get_count()<<endl;

    return 0;
}
