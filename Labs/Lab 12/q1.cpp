#include <bits/stdc++.h>

using namespace std;
// use of try-catch block for exception handling
int main() {
  int age;
  cout << "Enter Your Age: ";
  cin >> age;
  try {
    if (age >= 18)
      cout << "Acceess Granted - you are old enough\n";
    else
      throw (age);
  } catch (int age1) {
    cout << "Access Denied You are not old enough\n";
    cout << "Your Age: " << age1 << "\n";
  }
  return 0;
}