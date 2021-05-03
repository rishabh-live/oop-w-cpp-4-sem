// Multilevel Inheritance
#include <bits/stdc++.h>

using namespace std;
class student {
  protected:
    int roll_no;
  void put_no(void) {
    cout << "Roll Number = " << roll_no << "\n";
  }
  public:
    void get_no(int a) {
      roll_no = a;
    }
};
class test: public student // protected becomes protected and public becomes public
{
  protected: float sub1;
  float sub2;
  void put_marks(void) {
    cout << "Marks in Sub1 = " << sub1 << "\n";
    cout << "Marks in Sub2 = " << sub2 << "\n";
  }
  public: void get_marks(float a, float b) {
    sub1 = a;
    sub2 = b;
  }
};
class result: public test {
  float total;
  public:
    void display(void) {
      total = sub1 + sub2;
      put_no();
      put_marks();
      cout << "Total = " << total << "\n";
    }
};
int main() {
  int r;
  float e, d;
  cout << "Enter roll number and marks of student in Sub1 and Sub2 resp. :";
  cin >> r >> e >> d;
  result student1;
  student1.get_no(r);
  student1.get_marks(e, d);
  student1.display();
  return 0;
}