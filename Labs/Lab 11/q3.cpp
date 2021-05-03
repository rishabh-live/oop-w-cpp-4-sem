#include <bits/stdc++.h>

using namespace std;
// program : 9.1 Through Run-Time Poly.
// Uisng Virtual Function
class shape {
  protected:
    double d1, d2;
  public:
    void getdata(int a, int b) {
      d1 = a;
      d2 = b;
    }
  virtual double display_area(void) = 0;
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
    area = d1 * d2;// using pure virtual function
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
  shape * s;
  rectangle r1;
  s = & r1;
  s -> getdata(len, bre);
  cout << "\nThe area of rectangle of lenghth " << len << " and breath " <<
    bre << " is " << s -> display_area() << "\n";
  triangle t1;
  s = & t1;
  s -> getdata(base, hei);
  cout << "The area of triangle of height " << hei << " and base " << base <<
    " is " << s -> display_area() << "\n";
  return 0;
}