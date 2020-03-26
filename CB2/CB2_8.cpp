#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
  double  a = 3,
          b = 2,
          c = 1,
          d = sqrt(a + sqrt(a + sqrt(a))),
          e = c/(b + c/(b+c/b));
          
  cout   << fixed << setprecision(2) << d << "\n" << e << "\n";

  return 0;
}
