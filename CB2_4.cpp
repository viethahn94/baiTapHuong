#include <iostream>
#include <iomanip>

int main() {
  int a;
  long b;
  char c;
  float d;
  double e;
  std::cout << "Hay nhap vao a, b, c, d, e" << "\n";
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  std::cin >> d;
  std::cin >> e;

  std::cout   << "\n" << a
              << "\n" << b
              << "\n" << c << "\n";
  std::cout   << std::fixed;
  std::cout   << std::setprecision(3) << d << "\n";
  std::cout   << std::setprecision(9) << e << "\n";
  return 0;
}
