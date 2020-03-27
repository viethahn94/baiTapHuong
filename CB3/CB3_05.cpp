#include <iostream>
using namespace std;

int main() {
  float heightA, heightB;
  cout << "Chieu cao cua nguoi 1 va nguoi 2 la: " << '\n';
  cin >> heightA;
  cin >> heightB;

  if (heightA >= heightB) {
    cout << "Nguoi A cao hon nguoi B " << (heightA/heightB) <<" lan" <<'\n';
  }
  if (heightA < heightB) {
    cout << "Nguoi B cao hon nguoi A " << (heightB/heightA) <<" lan" <<'\n';
  }
  return 0;
}
