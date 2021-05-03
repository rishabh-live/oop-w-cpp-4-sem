// return reference to calling object
#include <bits/stdc++.h>

using namespace std;
class myclass {
  int m1, total;
  public:
    void getdata(int a) {
      m1 = a;
    }
  myclass & totalmarks(myclass & o) {
    o.total = this -> m1 + o.m1;
    return (o);
  }
  void display(void) {
    cout << "Total Marks is " << total << "\n";
  }
};
int main() {
  int a, b;
  cout << "Enter value of marks 1 and 2 resp.: ";
  cin >> a >> b;
  myclass obj1, obj2, obj3;
  obj1.getdata(a);
  obj2.getdata(b);
  obj3 = obj1.totalmarks(obj2);
  obj3.display();
  return 0;
}