#include <iostream>
using namespace std;

int main() {
    int n, max;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    max = 0;
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }

    cout << "Gia tri lon nhat la: " << max << endl;

    return 0;
}
