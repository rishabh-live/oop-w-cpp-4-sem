// Write a C++ Program to print the array index and
// array element using pointer

#include <iostream>

using namespace std;


class ArrayPointers{
    private:
        int data[5];
    public:
        void enterElements(){
               cout << "Enter elements: " << endl;

                for(int i = 0; i < 5; ++i){
                    cin >> data[i];
                }
      
        }
        void printElements(){
            cout << "You entered: ";
            for(int i = 0; i < 5; ++i){
                cout << endl << *(data + i);
            }
        }
};


int main(){

    ArrayPointers ap;
    ap.enterElements();
    ap.printElements();

    return 0;
}