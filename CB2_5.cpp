#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int a;

  cout << "Hay nhap vao gia tri a" << "\n";
  cin >> a;

  cout   << fixed;
  cout   << setprecision(3) << (double)a << "\n";

  return 0;
}
