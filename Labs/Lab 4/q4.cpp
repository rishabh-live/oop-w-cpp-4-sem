#include<iostream>


using namespace std;

class SwapPointers{
    private:
        int *a, *b, *temp;
    public:
        void takeInputs();
        void swapInputs();

};

void SwapPointers::takeInputs(){
    cout << "Enter value of a and b:";
	cin >> *a >> *b;
}

void SwapPointers::swapInputs(){
    temp = a;
	a = b;
	b = temp;
	cout << "\nAfter swaping\na=" << *a<< "\nb=" << *b << endl;
}

int main() {
    
    SwapPointers sp;

    sp.takeInputs();
    sp.swapInputs();

   

	return 0;
}