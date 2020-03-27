#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cout << "Nhap vao 3 so a, b, c" << '\n';

  cin >> a;
  cin >> b;
  cin >> c;

  if (a==b & b==c) {
    cout << "true" << '\n';
  }
  else {
    cout << "false" << '\n';
  }

  return 0;
}
