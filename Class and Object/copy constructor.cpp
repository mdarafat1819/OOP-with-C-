#include <bits/stdc++.h>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0.0)
    {};
    Distance(int ft, float in) : feet(ft), inches(in)
    {};
    void show_data()
    {
        cout<<"Feet: "<<feet<<endl;
        cout<<"Inches: "<<inches<<endl;
    }
};

int main()
{
    Distance dis1(11, 6.25);
    Distance dis2(dis1);
    Distance dis3 = dis2;

    dis1.show_data();
    dis2.show_data();
    dis3.show_data();

    return 0;
}
