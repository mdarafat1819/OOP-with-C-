#include <bits/stdc++.h>

using namespace std;

class A
{
protected:
    int a, b;
public:
    A() : a(0), b(0)
    {
        ///No Body
    }
    A(int a, int b) : a(a), b(b)
    {
        ///No Body
    }
    void show()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};
class B : protected A
{
protected:
    int c;
public:
    B() : A(0, 0), c(0)
    {
        ///No Body
    }
    B(int a, int  b, int c) : A(a, b), c(c)
    {
        ///No Body
    }
    void show()
    {
        A::show();
        cout<<"c: "<<c<<endl;
    }
};

class C : public B
{
public:
    C() : B(0, 0, 0)
    {

    }
    void show()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
        cout<<"c: "<<c<<endl;
    }

};

int main()
{
    B obj;///(1, 2, 3);

    obj.show();


    return 0;
}
