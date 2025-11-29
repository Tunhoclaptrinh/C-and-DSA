#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr[" << i << "][" << j<< "]" << ": " ;
            cin >> arr[i][j];
        }
    }

    cout << "Cac phan tu lon nhat la: ";
    for (int i = 0; i < n; i++) {
        int max = 0;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        cout << max << " ";
    }

    return 0;
}
