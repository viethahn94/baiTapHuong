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
      cout << a*b;
      break;
    case '/':
      cout << (float)a/b;
      break;
    case '+':
      cout << a+b;
      break;
    case '-':
      cout << a-b;
      break;
    default:
      cout << "Khong the thuc hien phep toan";
      break;
  }

  return 0;
}
