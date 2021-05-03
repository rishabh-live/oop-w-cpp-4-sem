// using member function
#include <bits/stdc++.h>

using namespace std;
class myclass {
  int a;
  public:
    void getdata(int x) {
      a = x;
    }
  myclass operator - (myclass o) {
    myclass temp;
    temp.a = a - o.a;
    return (temp);
  }
  myclass operator + (myclass o1) {
    myclass temp;
    temp.a = a + o1.a;
    return (temp);
  }
  void display(void) {
    cout << "A = " << a << "\n";
  }
};
int main() {
  myclass obj, obj1, obj2;
  obj.getdata(2);
  obj1.getdata(3);
  cout << "Before Overloding Initial Value\n";
  obj.display();
  obj1.display();
  obj2 = obj.operator + (obj1); // or obj2 = obj + obj1;
  cout << "After overloding sum value\n";
  obj2.display();
  obj2 = obj.operator - (obj1); // or obj2 = obj - obj1;
  cout << "After overloding substracted value\n";
  obj2.display();
  return 0;
}