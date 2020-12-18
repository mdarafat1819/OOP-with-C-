#include <bits/stdc++.h>

#define SIZE 1000

using namespace std;

class Stack1
{
protected:
    int arr[SIZE];
    int top;
public:
    Stack1() : top(-1)
    {
        ///No Body
    }
    void push(int value)
    {
        arr[++top] = value;
    }
    void top_data()
    {
        cout<<arr[top]<<endl;
    }
    void pop()
    {
        top--;
    }
};

class Stack : public Stack1
{
public:
    void push(int value)
    {
        if(top >= SIZE)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        Stack1 :: push(value);
    }
    void pop()
    {
        if(top < 0)
        {
            cout<<"Stack already empty"<<endl;
            return;
        }
        Stack1 :: pop();
    }
    void top_data()
    {
        if(top < 0)
        {
            cout<<"Stack already empty"<<endl;
            return;
        }
        Stack1 :: top_data();
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);

    s.top_data();

    s.pop();
    s.top_data();
    s.pop();
    s.pop();


    return 0;
}
