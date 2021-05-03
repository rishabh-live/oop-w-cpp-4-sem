// Multiple inheritance
#include <bits/stdc++.h>

using namespace std;
class base_1 {
  protected:
    int a;
  public:
    void getadata(int);
};
class base_2 {
  protected:
    int b;
  public:
    void getadata1(int);
};
class der: public base_1, public base_2 {
  int c;
  int mul(void);
  public:
    void display(void);
};
void base_1::getadata(int a1) {
  a = a1;
}
void base_2::getadata1(int b1) {
  b = b1;
}
int der::mul(void) {
  c = a * b;
  return (c);
}
void der::display(void) {
  cout << "Value of a = " << a << "\n";
  cout << "Value of b = " << b << "\n";
  cout << "Value of c = " << mul() << "\n";
}
int main() {
  der obj;
  obj.getadata(12);
  obj.getadata1(13);
  obj.display();
  return 0;
}