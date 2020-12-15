#include <bits/stdc++.h>

using namespace std;

class StudentInfo
{
public:

    string name;
    string id;
    StudentInfo(string name, string id)
    {
        this -> name = name;
        this -> id = id;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
class MarkSheet : public StudentInfo
{
public:

    int mark;
     MarkSheet(string name, string id, int mark):StudentInfo(name,id)
    {
        this -> name = name;
        this -> id = id;
        this -> mark = mark;
    }
    void print()
    {
        display();
        cout<<"Mark: "<<mark<<endl;
    }
};

int main()
{
    MarkSheet obj("Yeasin", "03", 70);

    obj.print();

    return 0;
}
