#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr1[n][m], arr2[n][m] , arr3[n][m];

    for (int s = 0; s < 2; s++) {
        cout << "Nhap ma tran " << s + 1 << ": "<< endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ( s == 0 ) {
                    cin >> arr1[i][j];
                } else {
                    cin >> arr2[i][j];
                }
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr3[i][j] << " ";
        }
    }

    return 0;
}
