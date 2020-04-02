#include <iostream>
using namespace std;

int main()
{
    int a,b,n,i,sum = 0;
    cout << "Nhap a, b, n"<<'\n';
    cin >> a;
    cin >> b;
    cin >> n;


    for ( i = a; i <= n; i++) {
      if (i%a == 0 & i%b !=0) {
        sum += i;
      }
    }
    cout <<"Tong cac so chia het cho a nhung ko chia het cho b la "<< sum << '\n';



    return 0;
}
