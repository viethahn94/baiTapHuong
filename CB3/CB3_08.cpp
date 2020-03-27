#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float a;
  cout << "Hay nhap vao so a la: " << '\n';
  cin >> a;
  cout <<fixed << "Luy thua bac 2 cua so a la: " << setprecision(3) << a*a << '\n';
  return 0;
}
