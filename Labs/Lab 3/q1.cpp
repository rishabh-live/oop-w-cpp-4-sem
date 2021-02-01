//Write a C++ Program to illustrate function with default arguments

#include <iostream>

using namespace std;

class Illustrate{
    public:
        void ReturnVal(string text = "Default Text", int val = 0 ){
            cout << "\nText State : " << text << "\nInterger value : " << val << "\n";
        }
};


int main(){
    
    Illustrate theObject;

    cout << "\nWith Default Values. \n";
    theObject.ReturnVal(); 
    cout << "\nWith Updated Values. \n";
    theObject.ReturnVal("New Words",89);

    return 0;
}