#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int partition(int arr[], int l, int r) {
    int pivot = arr[r]; // chot o ben phai cung
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // dua chot ve giua
    i++;
    swap(arr[i], arr[r]);
    return i;
}

void quickSort(int arr[], int l, int r) {
    if (l >= r) { return; }
    int p = partition(arr, l, r);
    quickSort(arr, l, p - 1);
    quickSort(arr, p + 1, r);
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
        }

        quickSort(arr1, 0, n - 1);
        quickSort(arr2, 0, n - 1);

        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += 1LL * arr1[i] * arr2[n - i - 1];
        }
        cout << sum << endl;
    }

    return 0;
}
