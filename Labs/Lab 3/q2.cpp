// Write a C++ Program to Illustrate function pass by reference


#include <iostream>

using namespace std;

class Illustrate{
    public:
        void swapNums(int &x, int &y) {
             int z = x;
             x = y;
             y = z;
}
};


int main(){
    
    Illustrate theObject;

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum <<  "\t" << secondNum << "\n";

    theObject.swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum <<  "\t" << secondNum << "\n";

    return 0;

    
}