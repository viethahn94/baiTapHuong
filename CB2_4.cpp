#include <iostream>
#include <iomanip>

int main() {
  using namespace std;
  int a;
  long b;
  char c;
  float d;
  double e;
  cout << "Hay nhap vao a, b, c, d, e" << "\n";
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;

  cout   << "\n" << a
              << "\n" << b
              << "\n" << c << "\n";
  cout   << fixed;
  cout   << setprecision(3) << d << "\n";
  cout   << setprecision(9) << e ;
  return 0;
}
