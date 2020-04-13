#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int i, so1, so2, min, ucln = 1;

    cout << "Nhap so thu nhat: ";
    cin >> so1;
    cout << "Nhap so thu hai: ";
    cin >> so2;
    if(so1 == 0 || so2 == 0) {
        cout << "Boi chung nho nhat cua 2 so la 0" << endl;

    } else {
        if(so1 < so2) {
            min = so1;
        } else {
            min = so2;
        }

        for(int i = 1; i <= min; i++) {
            if(so1%i == 0 && so2%i == 0) {
                ucln = i;
            }
        }
        cout << "Boi chung nho nhat cua " << so1 << " va " << so2 << " la " << (so1*so2)/ucln << endl;
    }
    return 0;
}
