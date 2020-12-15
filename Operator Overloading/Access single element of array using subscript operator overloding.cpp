#include <bits/stdc++.h>

#define LIMIT 1000

using namespace std;

class SafeArray
{
private:
    int arr[LIMIT];
public:
    SafeArray()
    {
        for(int i = 0; i < LIMIT; i++) arr[i] = 0;
    }

    int& operator [](int n)
    {
        if(n < 0 || n >= LIMIT)
        {
            cout<<"Size Overflow"<<endl;
            exit(1);
        }
        return arr[n];
    }
};

int main()
{
    SafeArray arr;

    for(int i = 0; i < 5; i++) arr[i] = i + 1;

    for(int i = 0; i < 5; i++) cout<<arr[i]<<endl;

    arr[LIMIT] = 10;

    return 0;
}
