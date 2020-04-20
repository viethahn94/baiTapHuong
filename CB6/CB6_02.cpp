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

int* daoNguocMang(int *A, int n) {
    int *tmp = new int[n]; // Tạo 1 mảng tạm

    int j = 0;
    // Duyệt ngược mảng A, bắt đầu từ phần tử cuối
    // Mỗi lần duyệt, lưu từng phần tử duyệt được vào mảng tạm
    for (int i = n - 1; i >= 0; i--) {
        tmp[j] = A[i];
        j++;
    }
    return tmp;
}

void xuatSoChan(int a[], int n) {
    for (int i = 0; i < n; i++){
        if (a[i]%2==0) {

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

    cout << "Mang dao nguoc la " << '\n';
    int *kq = daoNguocMang(a, n);
    xuat(kq, n);


    cout << '\n'<< "Xuat so chan trong mang: "<< endl;
    xuatSoChan(a,n);

    cout << '\n'<< "Xuat so chan trong mang theo thu tu tang dan : "<< endl;
    sapXep(a,n);
    xuatSoChan(a,n);

}
