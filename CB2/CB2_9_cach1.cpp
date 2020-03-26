#include <iostream>
using namespace std;
int main() {
  double a, b,t;
  cout << "Hay nhap vao cac so a, b" << '\n';
  cin >> a;
  cin >> b;
  t = a;
  a = b;
  b = t;

  cout  << "Gia tri a la " << a << "\n"
        << "Gia tri b la " << b;
  return 0;
}
