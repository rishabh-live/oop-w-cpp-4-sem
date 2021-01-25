//read a list of five numbers and counts the number of three and sevens in the data

#include <iostream>
#include <sstream>

using namespace std;

int countT(string thNum)
{
    stringstream numStream(thNum);

    int num;
    numStream >> num;

    int ctr = 0;
    int remainder;

    while (num > 0)
    {
        remainder = num % 10;
        num /= 10;

        if (remainder == 3)
            ctr++;
    }

    return ctr;
}

int countS(string thNum)
{
    stringstream numStream(thNum);

    int num;
    numStream >> num;
    int ctr = 0;
    int remainder;

    while (num > 0)
    {
        remainder = num % 10;
        num /= 10;

        if (remainder == 7)
            ctr++;
    }

    return ctr;
}

int main()
{

    string no;
    string input;
    int val = 1;

    while (val == 1 || val == 2)
    {
        cout << "-----MENU-----\n\n1. Enter a new no. \n2. Count 3s and 7s.\n\n";

        cin >> val;

        if (val == 1)
        {
            cout << "Enter desired no.";
            cin >> input;
            no = no + input;
        }
        else if (val == 2)
        {
            cout << "Total no of 3s are : "
                 << countT(no) << "\n"
                 << "And total no of 7s are : "
                 << countS(no) << "\n";
        }
        else
        {
            cout << "\n Invalid Input \n ---------------------------------- \n Exiting Program\n";
        }
    }
    cout << "\n\n\n";
    return 0;
}