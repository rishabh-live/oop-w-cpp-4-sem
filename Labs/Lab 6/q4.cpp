#include <bits/stdc++.h>
using namespace std;
class mycomplex
{
    float a, b;

public:
    mycomplex()
    {
        a = 0;
        b = 0;
    } // def constructor
    mycomplex(float c, float d) // para constructor
    {
        a = c;
        b = d;
    }
    mycomplex(mycomplex& c) // copy constructor
    {
        a = c.a;
        b = c.b;
    }
    void display(void) // display member function
    {
        cout << a << " + "
             << "j" << b << "\n";
    }
    ~mycomplex(){}// destructor
    
};
int main()
{
    
    float c,d;
    mycomplex c1;
    cout << "\nFor Def Constructor\n";
    c1.display();
    cout << "Enter the value of a and b resp.:";
    cin >> c >> d;
    mycomplex c2(c, d);
    cout << "\nFor Para Constructor\n";
    c2.display();
    mycomplex c3(c2);
    cout << "\nFor Copy Constructor\n";
    c3.display();
    return 0;
}