#include <iostream>
using namespace std;

int main() {
  float F;
  cout << "Hay nhap vao do F" << '\n';
  cin >> F;
  float C = (F-32)*5/9,
        K = C + 273.15;
  std::cout << "Do C la: " << C << '\n'
            << "Do K la: " << K;


  return 0;
}
