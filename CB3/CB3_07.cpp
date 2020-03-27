#include <iostream>
using namespace std;

int main()
{
    int so;
    cout << "Nhap so: ";
    cin >> so;
    if (!99 < so < 1000) {
      std::cout << "Khong phai so co 3 chu so" << '\n';
    }
    else {
    cout << "So dao nguoc cua " << so  << " la ";
    for (; so != 0; so = so / 10) {
        cout << so % 10;
    }
  }
    return 0;
}
