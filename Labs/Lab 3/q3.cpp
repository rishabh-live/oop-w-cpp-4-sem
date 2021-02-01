// Write a C++ Program to Illustrate function overloading

#include <iostream>

using namespace std;

class Illustrate{
    public:
        int plusFunc(int x, int y) {
            return x + y;
        }

        double plusFunc(double x, double y) {
            return x + y;
        }

};


int main(){

    Illustrate theObject;
    int myNum1 = theObject.plusFunc(8, 5);
    double myNum2 = theObject.plusFunc(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;




    return 0;
}
