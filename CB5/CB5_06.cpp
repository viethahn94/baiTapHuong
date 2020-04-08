#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int i,a,b;
    cout << "Cac so can tim la ";
    for (i = 10; i < 99; i++) {

      a=i%10;
      b=i/10;

      if(a*b==2*(a+b))
      cout << i << ", ";
    }
    return 0;


}
