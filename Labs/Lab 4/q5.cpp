#include<iostream>
using namespace std;

struct student
{
    string name;
    int roll_no;
    int marks;
};
student Students[5];
student temp;

void getdata(student *stud)
{
    cout<<"Please Enter Students Roll Number: ";
    cin>>stud->roll_no;
    cout<<"Please Enter Students Name: ";
    cin>>stud->name;
    cout<<"Please Enter Students Marks: ";
    cin>>stud->marks;
}

void showdata(student stud)
{
    cout<<"   "<<stud.roll_no<<"          "<<""<<stud.name<<"       "<<""<<stud.marks<<"      "<<endl;
}

int main()
{
    int n=6,choice=0;
    cout<<"******MENU******"<<endl;
    cout<<"Press 1 To Take input for 5 students"<<endl;
    cout<<"Press 2 To Display all the students information"<<endl;
    cout<<"Press 3 To Sort the student list w.r.t. roll_no and display all the students information"<<endl;
    cout<<"Press 4 To Sort the student list w.r.t. marks and display all the students information"<<endl;
    cout<<"Press 5 To Sort the student list w.r.t. name and display all the students information"<<endl;
    while(choice<n)
    {
        cout<<"Please Enter Your Choice From The Above Menu: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Please Enter Details Of 5 Students"<<endl;
            for(int i=0;i<5;i++)
            {
                getdata(&Students[i]);
            }
            break;
        case 2:
            cout<<"Roll No."<<"     "<<"Name"<<"     "<<"Marks"<<"     "<<endl;
            for(int i=0;i<5;i++)
            {
                showdata(Students[i]);
            }
            break;
        case 3:
            for(int i=0;i<5;i++)
            {
                for(int j=i+1;j<5;j++)
                {
                    if(Students[j].roll_no>Students[i].roll_no)
                    {
                        temp.roll_no=Students[i].roll_no;
                        temp.name=Students[i].name;
                        temp.marks=Students[i].marks;
                        Students[i].roll_no=Students[j].roll_no;
                        Students[i].name=Students[j].name;
                        Students[i].marks=Students[j].marks;
                        Students[j].roll_no=temp.roll_no;
                        Students[j].name=temp.name;
                        Students[j].marks=temp.marks;
                    }
                }
            }
            cout<<"Roll No."<<"     "<<"Name"<<"     "<<"Marks"<<"     "<<endl;
            for(int i=0;i<5;i++)
            {
                showdata(Students[i]);
            }
            break;
        case 4:
            for(int i=0;i<5;i++)
            {
                for(int j=i+1;j<5;j++)
                {
                    if(Students[j].marks>Students[i].marks)
                    {
                        temp.roll_no=Students[i].roll_no;
                        temp.name=Students[i].name;
                        temp.marks=Students[i].marks;
                        Students[i].roll_no=Students[j].roll_no;
                        Students[i].name=Students[j].name;
                        Students[i].marks=Students[j].marks;
                        Students[j].roll_no=temp.roll_no;
                        Students[j].name=temp.name;
                        Students[j].marks=temp.marks;
                    }
                }
            }
            cout<<"Roll No."<<"     "<<"Name"<<"     "<<"Marks"<<"     "<<endl;
            for(int i=0;i<5;i++)
            {
                showdata(Students[i]);
            }
            break;
        case 5:
            for(int i=0;i<5;i++)
            {
                for(int j=i;j<5;j++)
                {
                    if(Students[j].name>Students[i].name)
                    {
                        temp.roll_no=Students[i].roll_no;
                        temp.name=Students[i].name;
                        temp.marks=Students[i].marks;
                        Students[i].roll_no=Students[j].roll_no;
                        Students[i].name=Students[j].name;
                        Students[i].marks=Students[j].marks;
                        Students[j].roll_no=temp.roll_no;
                        Students[j].name=temp.name;
                        Students[j].marks=temp.marks;
                    }
                }
            }
            cout<<"Roll No."<<"     "<<"Name"<<"     "<<"Marks"<<"     "<<endl;
            for(int i=0;i<5;i++)
            {
                showdata(Students[i]);
            }
            break;
        default:
            cout<<"Wrong Choice"<<endl;
            cout<<"Exiting......"<<endl;
            break;
        }
    }
    return 0;
}