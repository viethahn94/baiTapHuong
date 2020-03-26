#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double canNang, chieuCao;
  cout << "Hay nhap vao can nang (kg) va chieu cao (m) cua ban" << "\n";
  cin >> canNang;
  cin >> chieuCao;
  
  cout   << fixed << "Chi so BMI cua ban la " << setprecision(2) << canNang/(chieuCao*chieuCao) << "\n";

  return 0;
}
