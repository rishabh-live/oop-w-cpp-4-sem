#include <iostream>

using namespace std;

class calculateArea{
    private:
        float area;
        int a, b;

    public:
        calculateArea(){
            takeInput();
            area = a*b;
            
        }
         ~calculateArea(){
            cout << "Destroyed Data" << endl;
        }

        void display(string text){
            cout << text << " " << area << endl;
        }

        void display(){
            cout << " Calculated area for given inputs are : " << area << endl;
        }
        void takeInput(){
            cout << "Enter Height : ";
            cin >> a;
            cout << endl;

            cout << "Enter Width : ";
            cin >> b;
            cout << endl;
        }
};


int main(){

    calculateArea square;

    square.display("Calulated Square width :");

    square.display();

    return 0;
}
