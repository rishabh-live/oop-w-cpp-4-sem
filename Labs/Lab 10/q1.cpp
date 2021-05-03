#include <bits/stdc++.h>

using namespace std;
class aclass {
  private:
    int roll;
  public:
    void getroll(int a) {
      roll = a;
    }
  void show(void) {
    cout << "\nRoll Number(In Base class) = " << roll << "\n";
  }
};
class astudent: public aclass {
  int sub1, sub2;
  public:
    void getmarks(int a, int b) {
      sub1 = a;
      sub2 = b;
    }
  void show(void) {
    int total = sub1 + sub2;
    cout << "In derived class\n";
    cout << "Marks in sub1 = " << sub1 << "\n";
    cout << "Marks in sub2 = " << sub2 << "\n";
    cout << "Total Marks = " << total << "\n";
  }
};
int main() {
  astudent obj;
  obj.getroll(12);
  obj.getmarks(20, 20);
  obj.show(); // here the show in der class overrides the base class show fun.
  obj.aclass::show(); // here using :: operator we can invoke the base class show fun.
  return 0;
}