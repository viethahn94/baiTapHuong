#include<iostream>
using namespace std;
int solonnhat(int n);
int main()
{
	int a;
	cout<<"Nhap vao so a"<<'\n';
	cin>>a;
	cout<<"so lon nhat trong "<< a <<" la "<<solonnhat(a);

}
int solonnhat(int a)
{
	int max=0;
	for(int i=a;i!=0;i/=10)
	{
		int temp=i%10;
		if(temp>max)
		{
			max=temp;
		}
	}
	return max;
}
