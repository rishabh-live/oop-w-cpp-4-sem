// To use namspace std


#include <iostream>

using namespace std;

namespace One
{

    int x = 5;
    void printX(){
        cout<<x<<endl;
    }

}


int main(){

    One::printX();

}
