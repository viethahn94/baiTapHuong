#include <iostream>
using namespace std;

int main()
{
  int a,b,c,d,tmp;
  cout << "Hay nhap vao cac so a, b, c , d" << '\n';
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;

    if (a>b) {
    tmp = a;
    a=b;
    b=tmp;
    }


    if (a>c){
    tmp = a;
    a=c;
    c=tmp;
    }


    if (a>d){
    tmp = a;
    a=d;
    d=tmp;
    }

    if (b>c){
    tmp = b;
    b=c;
    c=tmp;
    }

    if (b>d){
    tmp = b;
    b=d;
    d=tmp;
    }

    if (c>d){
    tmp = c;
    c=d;
    d=tmp;
    }


  cout << a << " "<<b <<" "<<c<<" " <<d << '\n';


}
