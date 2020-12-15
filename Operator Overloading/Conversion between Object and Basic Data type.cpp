#include <bits/stdc++.h>

using namespace std;

class Distance
{
private:
    float mtf, inches;///mtf = meeter to feet
    int feet;
public:
    Distance() : feet(0), inches(0.0), mtf(3.2802833F)
    {
        ///No Body
    }
    Distance(float meter) : mtf(3.2802833F)
    {
        feet = mtf * meter;
        inches = (mtf * meter - feet) * 12;
    }
    Distance(int ft, float in) : feet(ft), inches(in), mtf(3.2802833F)
    {
        ///No Body
    }
    void show()
    {
        cout<<feet<<"-"<<inches<<endl;
    }
    operator float() const
    {
        float ft = inches / 12;
        ft += feet;
        return ft / mtf;///convert feet to meter.
    }
};

int main()
{
    Distance dist1 = 2.35F;

    dist1.show();

    float meter = dist1;

    cout<<meter<<" meters"<<endl;

    Distance dist2(5, 10.25);

    meter = dist2;

    cout<<meter<<" meters"<<endl;

    return 0;
}
