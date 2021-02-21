#include <bits/stdc++.h>
using namespace std;
class student_record
{
    string name;
    int roll_no;
    float marks[5];

public:
    void getdata()
    {
        cout << "Enter the name of student:-"
             << "\n";
        getline(cin, name);
        cout << "Enter the roll no of student:- "
             << "\n";
        cin >> roll_no;
        cout << "Enter the marks of student in 5 different subjects:-"
             << "\n";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    double average()
    {
        float sum = 0;
        for (int x = 0; x < 5; x++)
        {
            sum += marks[x];
        }
        return sum / 5;
    }
    void display()
    {
        cout << "Name: " << name << "\n"
             << "Roll no: " << roll_no << "\n";
        for (int x = 0; x < 5; x++)
        {
            cout << "Marks in " << x + 1 << "subject is: " << marks[x] << "\n";
        }
    }
    void Grade()
    {
        double avg = average();
        if (avg <= 100 && avg >= 90)
        {
            cout << "S";
        }
        else if (avg <= 89 && avg >= 80)
        {
            cout << "A";
        }
        else if (avg <= 79 && avg >= 70)
        {
            cout << "B";
        }
        else if (avg <= 69 && avg >= 60)
        {
            cout << "C";
        }
        else if (avg <= 59 && avg >= 50)
        {
            cout << "D";
        }
        else if (avg <= 49 && avg >= 40)
        {
            cout << "E";
        }
        else
        {
            cout << "F";
        }
    }
};
int main()
{
    student_record R[5];
    for (int i = 0; i < 5; i++)
    {
        R[i].getdata();
        cin.ignore();
    }
    for (int i = 0; i < 5; i++)
    {
        R[i].display();
        cout << "Average marks of the student is: " << R[i].average() << "\n";
        cout << "Grade of the student is:";
        R[i].Grade();
        cout << "\n";
    }
    return 0;
}
