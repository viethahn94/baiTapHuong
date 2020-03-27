#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cout<<"Nhap vao so tu nhien a"<<'\n';
	cin>> a ;
	float b = sqrt(a);
	if (a > 2 && b - (int)b == 0 ) {
		cout << a <<" la so chinh phuong" << '\n';
	}
	else cout << a << " khong phai la so chinh phuong" << '\n';
}
