// to use friend function to access private members of a class through objects
#include <bits/stdc++.h>

using namespace std;
class myclass {
  int a, b;
  public:
    void getdata(int c, int d) {
      a = c;
      b = d;
    }
  friend void display_sum(myclass obj1) {
    int sum;
    sum = obj1.a + obj1.b;
    cout << "Sum of two numbers is " << sum << "\n";
  }
};
int main() {
  int c, d;
  cout << "Enter Two Numbers:";
  cin >> c >> d;
  myclass obj;
  obj.getdata(c, d);
  display_sum(obj);
  return 0;
}