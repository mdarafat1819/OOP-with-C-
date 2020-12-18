#include <bits/stdc++.h>

using namespace std;

class A
{
public:
   void show()
   {
        cout<<"This is Class A"<<endl;
   }
};
class B
{
public:
    void show()
    {
        cout<<"This is Class B"<<endl;
    }
};
class C : public A, public B
{

};

int main()
{
    C obj;

    obj.A::show();

    return 0;
}
