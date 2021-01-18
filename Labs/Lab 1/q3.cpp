// To use namspace std


#include <iostream>

using namespace std;

namespace Try
{

    int x = 5;
    void printX(){
        cout<<x<<endl;
    }

}


int main(){

    Try::printX();

}
