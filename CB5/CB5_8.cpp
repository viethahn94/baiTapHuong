#include <iostream>
#include <string>
using namespace std;

int main() {

  string Can[10] = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};

  string Chi[12] = {"Than", "Dau", "Tuan", "Hoi", "Ti", "Suu", "Dan", "Mao", "Thin", "Ti", "Ngo", "Mui"};

  int nam;
  cout << "Nhap vao so nam" << '\n';
  cin >> nam;
  cout << "Nam "<< nam << " la nam " <<Can[int(nam%10)]  <<" "<< Chi[int(nam%12)]<< '\n';

  return 0;
}
