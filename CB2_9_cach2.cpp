#include <iostream>
using namespace std;
int main() {
  double a, b;
  cout << "Hay nhap vao cac so a, b" << '\n';
  cin >> a;
  cin >> b;
  a = a + b;
  b = a - b;
  a = a - b;

  cout  << "Gia tri a la " << a << "\n"
        << "Gia tri b la " << b;
  return 0;
}
