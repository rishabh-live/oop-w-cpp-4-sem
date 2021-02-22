#include <iostream>

using namespace std;


class theDistance{
    private:
        float feet, inches;
        int option;

    public:

        theDistance(){
            feet = 0;
            inches = 0;
        }
        ~theDistance(){
            cout << "Object Destroyed \nExiting Program \n===============================================================\n" << endl;
        }

        void convertToFeet(){
            cout << "Enter Inches : ";
            cin >> inches;
            feet = inches/12; 
            cout << inches << " inch(es) = " << feet << " feet";
        }
        void convertToFeet(float inpuInches){
            inpuInches =  inches;
            feet = inches/12; 
            cout << inches << " inch(es) = " << feet << " feet";
        }


        void convertToInch(){
            cout << "Enter Feet : ";
            cin >> feet;
            inches = feet * 12; 
            cout << feet << " feet = " << inches << "inch(es)";
        }
        void convertToInch(float inpuInches){
            inpuInches =  feet;
            inches = feet * 12;
            cout << feet << " feet = " << inches << "inch(es)";
        }
        void menu(){
            cout << "================== MENU ==================";
            cout << "\n 1 for Feet to Inches \n 2 for Inches to feet \n 3 for examine Feet to Inches \n 4 for examine Inches to feet \n 0 to exit \n\n";
        }

        int ask(){
            cout << "Choose : ";
            cin >> option;
            return option;
        }

        

};


int main(){

    theDistance obj;
    int x = 99;
    while(x != 0){

        obj.menu();
        x = obj.ask();

        if(x == 1){
            obj.convertToInch();
        }

        if(x == 2){
            obj.convertToFeet();
        }

        if(x == 3){
            obj.convertToInch(1);
        }

        if(x == 4){
            obj.convertToFeet(1);
        }

        cout << "\n";

        
    }
    return 0;

}