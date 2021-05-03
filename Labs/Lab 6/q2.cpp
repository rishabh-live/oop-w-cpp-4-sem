#include <bits/stdc++.h>
using namespace std;
// use of copy constructor
class myclass
{
    int a, b;

public:
    myclass(int m, int n)
    {
        a = m;
        b = n;
        cout << "Inside Parametarized Constructor\n";
        cout << "a = " << a << " b = " << b;
    }
    myclass(myclass& i)
    {
        a = i.a;
        b = i.b;
        cout << "\nInside copy Constructor, values are copied\n";
        cout << "a = " << a << " b = " << b;
    }
};
int main()
{
    myclass c1(10, 20), c2(c1);
    return 0;
}