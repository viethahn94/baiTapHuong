#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double a, b, c;
  cout << "Hay nhap vao cac so a, b,c" << '\n';
  cin >> a;
  cin >> b;
  cin >> c;
  
  cout  << fixed << "Phuong trinh bac 2 la "<< setprecision(2) << a << "x^2 + "<< b << "x + "<< c << " = 0"<< "\n";
  return 0;
}
