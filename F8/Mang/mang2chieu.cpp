#include <iostream>
using namespace std;

int main() {
    // kiểu_dữ_liệu tên_mảng[số_hàng][số_cột];
    const int SO_HANG = 2;
    const int SO_COT = 3;

    int arr[SO_HANG][SO_COT] = {
        {1,2,3},
        {4,5,6}
    };

    for (int i = 0; i < SO_HANG; i++) {
        for (int j = 0; j < SO_COT; j++) {
            // Truy suất đến phần tử của mảng
            // Hàng i cột j
            // cout << "arr[" << i << "][" << j<< "]" << ": ";
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
