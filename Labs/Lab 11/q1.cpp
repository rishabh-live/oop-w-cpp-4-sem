#include <bits/stdc++.h>

using namespace std;
class myclass {
  int a;
  public:
    myclass(int a)  // same local variable
  {
    this -> a = a;    // using this pointer assign local to member
  }
  void display(void) {
    cout << "The value of number a is " << a << "\n";
  }
};
int main() {
  myclass obj(14);
  obj.display();
  return 0;
}