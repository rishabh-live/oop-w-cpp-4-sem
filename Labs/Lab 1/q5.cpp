#include <iostream>

using namespace std;

namespace maxMinFinder{

    int a = 10;
    int b = 45;
    int c = 9;
    int min,max;

    void findMin(){

        if(a < b && a < c){
            min = a;
        }

        if(b < a && b < c){
            min = b;
        }
        if(c < a && c < b){
            min = c;
        }

        cout<<min<<endl;

    }
    void findMax(){

        if(a > b && a > c){
            max = a;
        }

        if(b > a && b > c){
            max = b;
        }
        if(c > a && c > b){
            max = c;
        }
        cout<<max<<endl;

    }
}

int main(){

    maxMinFinder::findMin();
    maxMinFinder::findMax();
}
