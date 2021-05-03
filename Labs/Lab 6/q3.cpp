#include <bits/stdc++.h>
using namespace std;
class distance1
{
    int feet, inch;

public:
    distance1()
    {
        feet = 0;
        inch = 0;
    }
    distance1(int a, int b)
    {
        feet = a;
        inch = b;
    }
    ~distance1()
    {
        cout << "Destructor Invoked\n";
    }
    void disp()
    {
        cout << "Feet = " << feet << " Inch = " << inch << "\n";
    }
};
int main()
{
    distance1 d1;
    distance1 d2(10, 20);
    d1.disp();
    d2.disp();
    return 0;
}