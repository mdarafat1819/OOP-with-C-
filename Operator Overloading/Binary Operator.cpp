#include <bits/stdc++.h>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0)
    {
        ///No Body
    }
    Distance(int f, float in) : feet(f), inches(in)
    {
        ///No Body
    }
    void show()
    {
        cout<<feet<<"-"<<inches<<endl;
    }
    Distance operator + (Distance a) const
    {
        int f = feet + a.feet;
        float in = inches + a.inches;
        f = f + inches / 12;
        in = in - (int)(in / 12) * 12;
        return Distance(f, in);
    }
};

int main()
{
    Distance dist1(10, 6.5), dist2(11, 6.25), dist3, dist4;

    dist3 = dist1 + dist2;

    dist3.show();

    dist4 = dist1 + dist2 + dist3;

    dist4.show();

    return 0;
}
