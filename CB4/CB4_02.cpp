#include <iostream>
using namespace std;

int main() {
  int a, b;
  char c;
  cout << "Nhap vao 2 so a, b va ki tu c" << '\n';

  cin >> a;
  cin >> b;
  cin >> c;

  switch (c){
    case '*':
      cout << a*b << '\n';
      break;
    case '/':
      cout << a/b << '\n';
      break;
    case '+':
      cout << a+b << '\n';
      break;
    case '-':
      cout << a-b << '\n';
      break;
    default:
      cout << "Khong the thuc hien phep toan" << '\n';
      break;
  }

  return 0;
}
