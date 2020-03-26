#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double  a, b, c;
  cout << "Hay nhap vao cac canh co do dai a, b, c" << '\n';
  cin >> a;
  cin >> b;
  cin >> c;
  if (a + b > c && a + c > b && b + c > a){
  double  p = (a+b+c)/2,
          C = a + b + c,
          S = sqrt(p*(p-a)*(p-b)*(p-c)),
          ha = 2*S/a,
          hb = 2*S/b,
          hc = 2*S/c,
          ma = sqrt(2*b*b + 2*c*c - a*a)/2,
          mb = sqrt(2*a*a + 2*c*c - b*b)/2,
          mc = sqrt(2*b*b + 2*a*a - c*c)/2,
          ga = 2/(b+c)*sqrt(b*c*p*(p-a)),
          gb = 2/(a+c)*sqrt(a*c*p*(p-b)),
          gc = 2/(b+a)*sqrt(b*a*p*(p-c)),
          r = S/p,
          R = a*b*c/4/S;

  cout    << "Chu vi tam giac la C = " << C << "\n"
          << "Dien tich tam giac la S = " << S << "\n"
          << "Do dai 3 duong cao la ha = " << ha
          << ", hb = "<< hb
          << ", hc = "<< hc << "\n"
          << "Do dai 3 duong trung tuyen la ma = " << ma
          << ", mb = "<< mb
          << ", mc = "<< mc << "\n"
          << "Do dai 3 duong phan giac la ga = " << ga
          << ", gb = "<< gb
          << ", gc = "<< gc << "\n"
          << "Ban kinh duong tron noi tiep la r = "<< r << "\n"
          << "Ban kinh duong tron ngoai tiep la R = "<< R << "\n";
  }
  else cout << "Khong phai hinh tam giac" << '\n';
  return 0;
}
