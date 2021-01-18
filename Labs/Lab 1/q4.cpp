// Aim to find sum of two numbers


#include <iostream>
using namespace std;

namespace sum{

    int x = 5;
    int y = 10;

    int sum = x + y;

    void printSum(){

        cout<<sum<<endl;

    }
}


int main(){

    sum::printSum();

}
