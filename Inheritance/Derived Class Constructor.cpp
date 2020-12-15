#include <bits/stdc++.h>

using namespace std;

class Counter
{
protected:
    int cnt;
public:
    Counter() : cnt(0)
    {
        ///No Body
    }
    Counter(int c) : cnt(c)
    {
        ///No Body
    }
    int get_count()
    {
        return cnt;
    }
    Counter operator ++()
    {
        ++cnt;
        return Counter(cnt);
    }
};

class CountDn : public Counter
{
public:
    CountDn() : Counter()
    {
        ///No Body
    }
    CountDn(int c) : Counter(c)
    {
        ///No Body
    }
    CountDn operator --()
    {
        --cnt;
        return CountDn(cnt);
    }
};

int main()
{
    CountDn c1;
    CountDn c2(100);
    cout << "\nc1=" << c1.get_count(); //display
    cout << "\nc2=" << c2.get_count(); //display
    ++c1;
    ++c1;
    ++c1; //increment c1
    cout << "\nc1=" << c1.get_count(); //display it
    --c2;
    --c2; //decrement c2
    cout << "\nc2=" << c2.get_count(); //display it
    CountDn c3 = --c2; //create c3 from c2
    cout << "\nc3=" << c3.get_count();

    return 0;
}
