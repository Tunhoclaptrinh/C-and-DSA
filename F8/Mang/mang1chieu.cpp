#include <iostream>
using namespace std;

int main() {
    //kiểu_dữ_liệu tên_mảng[kích_thước];
    int numbers[5];
    // int numbers[5]= {5,5,5,5,5};

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << ' ' << numbers[i];
    }

    return 0;
}
