#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >>k;
    int arr[n];

    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Ket qua: " << "\n";
    // Cách 1:
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++) {
            if (arr[j] + arr[i] == k ) {
                cout << "Index: " << j << " " << i << endl;
                cout << "Value: " << arr[j] << " " << arr[i];
                return 0;
            }
        }
    }

    // Cách 2:
    // for (int i = 0; i < n; i++){
    //     for (int j = 1; j < n; j++) {
    //         if (arr[j] + arr[i] == k  && i != j) {
    //             cout << "Index: " << i << " " << j << endl;
    //             cout << "Value: " << arr[i] << " " << arr[j];
    //             return 0;
    //         }
    //     }
    // }

    cout << "Khong co" <<endl;

    return 0;
}
