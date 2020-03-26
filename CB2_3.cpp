#include <iostream>
#include <string>

int main() {
  int x;
  float y;
  std::string z;
  std::cout << "Hay nhap vao x, y , z" << "\n";
  std::cin >> x;
  std::cin >> y;
  std::cin >> z;
  std::cout << "Hien thi lien nhau: "<< "x = "<< x << ", y = " << y << ", z = " << z << "\n";
  std::cout << "Hien thi cach dong" << "\nx = "<< x << "\ny = " << y << "\nz = " << z << "\n";
  return 0;
}
