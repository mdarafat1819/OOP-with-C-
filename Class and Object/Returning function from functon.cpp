#include <bits/stdc++.h>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0)
    {};
    Distance(int ft, float in) : feet(ft), inches(in)
    {};
    void getDist()
    {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inches: ";
        cin>>inches;
    }
    void show()
    {
       cout<<"Distance: "<<feet<<"-"<<inches<<endl;
    }
    Distance add(Distance a)
    {
        Distance t;
        t.feet = a.feet + feet;
        t.inches = a.inches + inches;
        t.feet += (t.inches / 12);
        t.inches = t.inches - (int)(t.inches / 12) * 12;
        return t;
    }
};
int main()
{
    Distance dis1, dis2(11, 6.28), dis3;

    dis1.getDist();
    dis3 = dis1.add(dis2);

    dis1.show();
    dis2.show();
    dis3.show();

    return 0;
}
