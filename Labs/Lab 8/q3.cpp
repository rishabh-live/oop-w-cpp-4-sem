#include <bits/stdc++.h>

using namespace std;
class complex1 {
  float x, y;
  public:
    friend void operator == (complex1 o, complex1 o1) // to compare
  {
    if ((o.x == o1.x) && (o.y == o1.y))
      cout << "Two Complex Numbers are equal\n";
    else
      cout << "Two Complex Numbers are not equal\n";
  }
  friend complex1 operator + (complex1 o, complex1 o1) // to add
  {
    complex1 temp;
    temp.x = o.x + o1.x;
    temp.y = o.y + o1.y;
    return (temp);
  }
  friend complex1 operator - (complex1 o, complex1 o1) // to substract
  {
    complex1 temp1;
    temp1.x = o.x - o1.x;
    temp1.y = o.y - o1.y;
    return (temp1);
  }
  friend complex1 operator * (complex1 o, complex1 o1) // to multiply
  {
    float prod1, prod2, prod3;
    complex1 temp1;
    prod1 = o.x * o1.x;
    prod2 = o.y * o1.y;
    prod3 = (o.x + o.y) * (o1.x + o1.y);
    temp1.x = prod1 - prod2;
    temp1.y = prod3 - (prod1 + prod2);
    return (temp1);
  }
  // overloding >> , << operators
  friend istream & operator >> (istream & din, complex1 & v) // to take input
  {
    cout << "Enter real and imaginary resp. :";
    din >> v.x >> v.y;
    return (din);
  }
  friend ostream & operator << (ostream & dout, complex1 & v1) // to display output
  {
    dout << v1.x << " + i" << v1.y << "\n";
    return (dout);
  }
};
int main() {
  complex1 c1, c2, c3, c4, c5; // objects declaration
  cout << "Enter Elements:\n"; // input overloding
  cin >> c1;
  cin >> c2;
  cout << "Before Overloding\n"; // output overloding
  cout << c1;
  cout << c2;
  cout << "After Overloding\n";
  c1 == c2;
  // == operator overloding
  cout << "Addition:\n"; // + operator overloding
  c3 = c1 + c2;
  cout << c3;
  // << operator overloding
  cout << "Substraction:\n"; // - operator overloding
  c4 = c1 - c2;
  cout << c4;
  // << operator overloding
  cout << "Multiplication:\n"; // * operator overloding
  c5 = c1 * c2;
  cout << c5;
  // << operator overloding
  return 0;
}