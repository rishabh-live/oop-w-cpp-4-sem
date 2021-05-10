/* Program to create class to read and add two times.*/
#include <iostream>
using namespace std;
 
class TimeAdder
{
private:
    int hours;
    int minutes;
    int seconds;
 
public:
    void getTime();
    void printTime();
    void addTime(TimeAdder T1,TimeAdder T2);
};
 
void TimeAdder::getTime()
{
    cout << "Please Enter time:\n";
    cout << "Hours: ";    cin>>hours;
    cout << "Minutes: ";  cin>>minutes;
    cout << "Seconds: ";  cin>>seconds;
    cout << endl;
}
 
void TimeAdder::printTime()
{
    cout << "\nTime after add:\t";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
 
void TimeAdder::addTime(TimeAdder T1,TimeAdder T2)
{
     
    this->seconds=T1.seconds+T2.seconds;
    this->minutes=T1.minutes+T2.minutes + this->seconds/60;
    this->hours= T1.hours+T2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}
 
 
int main()
{
    TimeAdder T1,T2,T3;
    T1.getTime();
    T2.getTime();
    T3.addTime(T1,T2);
    T3.printTime();
     
    return 0;
}
