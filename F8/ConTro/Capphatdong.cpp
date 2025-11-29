#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int *arr = new int[n]; // cấp phát động

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Mang: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; // giải phóng bộ nhớ
    return 0;
}
