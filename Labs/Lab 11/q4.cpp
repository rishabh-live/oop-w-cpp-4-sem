#include <bits/stdc++.h>

using namespace std;
// program : 9.1 Through Compile-Time Poly.
// Without Using Virtual Function
class shape {
  protected:
    double d1, d2;
  public:
    void getdata(int a, int b) {
      d1 = a;
      d2 = b;
    }
  double display_area(void);
};
class triangle: public shape {
  public: double display_area(void) {
    double area;
    area = 0.5 * d1 * d2;
    return (area);
  }
};
class rectangle: public shape {
  public: double display_area(void) {
    double area;
    area = d1 * d2;
    return (area);
  }
};
int main() {
  double len, bre, hei, base;
  cout << "Enter Dimensions for Rectangle\n";
  cout << "Length Of Rectangle :";
  cin >> len;
  cout << "Breath Of Rectangle :";
  cin >> bre;
  cout << "\nEnter Dimensions for triangle\n";
  cout << "Enter Height :";
  cin >> hei;
  cout << "Enter Base :";
  cin >> base;
  // uisng the class resolution operator
  rectangle r1;
  r1.getdata(len, bre);
  cout << "\nThe area of rectangle of lenghth " << len << " and breath " <<
    bre << " is " << r1.rectangle::display_area() << "\n";
  triangle t1;
  t1.getdata(base, hei);
  cout << "The area of triangle of height " << hei << " and base " << base <<
    " is " << t1.triangle::display_area() << "\n";
  return 0;
}