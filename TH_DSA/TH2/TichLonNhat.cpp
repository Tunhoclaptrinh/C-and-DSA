#include <bits/stdc++.h>
using namespace std;


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

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    long long p2_1 = arr[n-1] * arr[n-2];       // 2 số lớn nhất
    long long p2_2 = arr[0] * arr[1];           // 2 số nhỏ nhất
    long long p3_1 = arr[n-1] * arr[n-2] * arr[n-3]; // 3 số lớn nhất
    long long p3_2 = arr[0] * arr[1] * arr[n-1];     // 2 nhỏ nhất + 1 lớn nhất

    long long result = max({p2_1, p2_2, p3_1, p3_2});
    cout << result;

    return 0;
}