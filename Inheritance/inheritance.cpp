#include <bits/stdc++.h>

using namespace std;

class Shape
{
protected:

    int height, width;
public:
    Shape() : height(0), width(0)
    {
        ///No Body
    }
    Shape(int h, int w) : height(h), width(w)
    {
        ///No Body
    }

};

class Volume : public Shape
{
public:
    int length;
    Volume() : length(0)
    {
        ///No Body
    }
    Volume(int h, int w, int l) : length(l), Shape(h, w)
    {
        ///No Body
    }
    void show()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Width: "<<width<<endl;
    }

};

int main()
{
     Volume v(1, 2, 3);

     v.show();


    return 0;
}
