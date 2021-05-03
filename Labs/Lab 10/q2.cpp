#include <bits/stdc++.h> // use of virtual classes so that no duplicate members are inherited

using namespace std;
class student {
  protected:
    int roll;
  public:
    void getno(int a) {
      roll = a;
    }
  void putno(void) {
    cout << "Roll Number = " << roll << "\n";
  }
};
class test: virtual public student {
  protected: float sub1,
  sub2;
  public: void getmarks(float f1, float f2) {
    sub1 = f1;
    sub2 = f2;
  }
  void putmarks(void) {
    cout << "Marks in sub1 = " << sub1 << "\n";
    cout << "Marks in sub2 = " << sub2 << "\n";
  }
};
class sports: virtual public student {
  protected: float score;
  public: void getscore(float f) {
    score = f;
  }
  void putscore(void) {
    cout << "Score in Sports = " << score << "\n";
  }
};
class result: public test, public sports {
  float total;
  public:
    void display(void) {
      total = sub1 + sub2 + score;
      putno();
      putmarks();
      putscore();
      cout << "Total = " << total << "\n";
    }
};
int main() {
  result r1;
  r1.getno(100);
  r1.getmarks(29, 30);
  r1.getscore(50);
  r1.display();
  return 0;
}