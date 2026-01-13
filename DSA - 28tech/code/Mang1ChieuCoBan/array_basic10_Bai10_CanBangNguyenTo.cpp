#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sum(int arr[], int l, int r) {
    int ans = 0;
    for (int i = l; i < r; i++) {
        ans += arr[i];
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (isPrime(sum(arr, 0, i)) && isPrime(sum(arr, i + 1, n))) {
            cout << i << ' ';
        }
    }

    return 0;
}
