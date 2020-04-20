
#include<iostream>
using namespace std;

void nhap(int a[], int &n) {
    cout << "Nhap n: " << '\n';
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int Tong(int a[], int n){
	int temp = 0;
	for(int i = 0; i<n; i++)
	{
		temp += a[i];

	}
  return temp;
}


void xuatSoLe(int a[], int n) {
    for (int i = 0; i < n; i++){
        if (a[i]%2==1) {
          cout << a[i] << " ";
        }
    }
}

void sapXep(int a[],int n){

  for(int i=1 ;i<n ;i++)
     {
        int j=i-1;
        int tmp=a[i];
        while(j >= 0 && tmp < a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=tmp;
     }

}


int main(){

    int a[1000];
    int n;

    nhap(a, n);
    cout << "Xuat mang: " << endl;
    xuat(a, n);

    int temp = Tong(a,n);
    cout <<'\n'<< "Tong cua tat cac cac so trong mang a la " << temp;

    cout <<'\n'<< "TBC cua cac so la " << int(temp/n)<< '\n';

    cout << "Xuat so le trong mang: "<< endl;
    xuatSoLe(a,n);

    cout << '\n' << "Sap xep mang tang dan" << endl;
    sapXep(a,n);
    xuat(a, n);

    cout <<'\n'<< "So nho nhat la "<< a[0] << '\n';
    cout <<'\n'<< "So lon nhat la "<< a[n-1] << '\n';


}
