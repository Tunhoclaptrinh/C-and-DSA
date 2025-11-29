#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool nextCombination(vector<int> &a, int n, int k) {
    int i = k - 1;
    while (i >= 0 && a[i] == n - k + i + 1) i--;
    if (i < 0) return false;
    a[i]++;
    for (int j = i + 1; j < k; j++)
        a[j] = a[j - 1] + 1;
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(k);
    for (int i = 0; i < k; i++) arr[i] = i + 1;

    int count = 1;
    do {
        if (isPrime(count)) {
            cout << count << ": ";
            for (int x : arr) cout << x << " ";
            cout << "\n";
        }
        count++;
    } while (nextCombination(arr, n, k));

    return 0;
}
