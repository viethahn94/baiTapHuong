#include <iostream>
using namespace std;

int main() {
  const double PI = 3.14159;
  float R;
  cout << "Ban kinh cua duong tron la: " <<  '\n';
  cin >> R;
  float D = 2*R,
        C = D * PI,
        S = PI * R * R;
  cout << "Duong kinh cua duong tron la: " << D << '\n'
            << "Chu vi cua duong tron la: " << C<< '\n'
            << "Dien tich cua duong tron la: " << S;

  return 0;
}
