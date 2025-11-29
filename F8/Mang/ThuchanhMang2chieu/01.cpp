#include <iostream>
using namespace std;

int main() {
    int n,m, sum, arr[10][10];
    cin>>n>>m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr[" << i << "][" << j<< "]" << ": " ;
            cin >> arr[i][j];
        }
    }

    sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Tong cac phan tu trong mang la: " << sum << endl;

    return 0;
}
