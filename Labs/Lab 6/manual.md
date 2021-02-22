# OOP with C++

## Lab work - 06

#### Lab Date - 22th Feb 2021

#### Name - Rishabh

#### Regno. - 201800631

#### Semester - 6th

#### GitHub - [https://github.com/rishabh-live/oop-w-cpp-4-sem/tree/main/Labs](https://github.com/rishabh-live/oop-w-cpp-4-sem/tree/main/Labs)

---

> ### 1) Write a program to use constructors, destructor and function overloading

 **_Source Code_**

```cpp
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
```

**_Output_**

![Lab6 Output](../outputs/Lab_6_1.png)

----