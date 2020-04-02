#include <iostream>
using namespace std;

int main() {
  int c;
  cout << "Hay nhao vao gia tri c" << '\n';
  cin >> c;

  for (int i = 1; i <= c; ++i) {
    for (int j = 1; j <= c; ++j) {
        cout << "* ";
    }
    cout << endl;
}

  return 0;
}
