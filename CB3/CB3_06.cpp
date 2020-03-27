#include <iostream>
using namespace std;

int main() {
  int hours, days = 0, weeks = 0;
  cout << "Hay nhap vao so gio la: " << '\n';
  cin >> hours;

  if (hours >= 168) {
    weeks += (int)(hours/168);
    hours = hours - weeks*168;
  }
  if (168 < hours <= 24) {
    days += (int)(hours/24);
    hours = hours - days*24;
  }
  cout << "Thoi gian cua ban la "<< weeks << " tuan "<< days <<" ngay " << hours << " gio" << '\n';
  return 0;
}
