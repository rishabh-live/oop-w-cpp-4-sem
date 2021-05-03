// using friend function
#include <bits/stdc++.h>

using namespace std;
int i = 1;
class myclass {
  float a;
  public:
    void getdata(void) {
      cout << "Enter number " << i << " : ";
      cin >> a;
      i++;
    }
  friend myclass operator / (myclass a, myclass b) {
    myclass temp;
    temp.a = a.a / b.a;
    return (temp);
  }
  friend myclass operator * (myclass a, myclass b) {
    myclass temp;
    temp.a = a.a * b.a;
    return (temp);
  }
  void display(void) {
    cout << "Result = " << a << "\n";
  }
};
int main() {
  myclass c1, c2, c3;
  c1.getdata();
  c2.getdata();
  cout << "Performing muliplication\n";
  c3 = c1 * c2;
  c3.display();
  cout << "Performing division\n";
  c3 = c1 / c2;
  c3.display();
  return 0;
}