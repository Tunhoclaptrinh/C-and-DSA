#include <iostream>
using namespace std;

int main() {
    int n,m, sumOdd, arr[10][10];
    cin>>n>>m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr[" << i << "][" << j<< "]" << ": " ;
            cin >> arr[i][j];
        }
    }

    sumOdd = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] % 2 != 0) {
                sumOdd += arr[i][j];
            }
        }
        cout << endl;
    }

    cout << "Tong cac phan tu le mang la: " << sumOdd << endl;

    return 0;
}
