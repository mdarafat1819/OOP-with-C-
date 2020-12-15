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
    void get_distance()
    {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inches: ";
        cin>>inches;
    }
    void show_distance()
    {
        cout<<"Feet: "<<feet<<endl;
        cout<<"Inches: "<<inches<<endl;
    }
    void add_distance(Distance a, Distance b)
    {
        feet = a.feet + b.feet;
        inches = a.inches + b.inches;
        feet += (inches / 12);
        inches = inches - (int)(inches / 12) * 12;
    }
};

int main()
{
    Distance dist1, dist3; //define two lengths
    Distance dist2(11, 6.25); //define and initialize dist2
    dist1.get_distance(); //get dist1 from user: input: 17 5.75
    dist3.add_distance(dist1, dist2); //dist3 = dist1 + dist2
    //display all lengths
    cout <<"\ndist1\n";
    dist1.show_distance();
    cout <<"\ndist2\n";
    dist2.show_distance();
    cout <<"\ndist3\n";
    dist3.show_distance();
    cout << endl;
    return 0;

    return 0;
}
