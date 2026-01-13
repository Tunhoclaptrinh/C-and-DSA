#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 1001;

bool prime[MAXN];

void initPrime() {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;

    for (int i = 2; i < MAXN; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                prime[j] = false;
            }
        }
    }
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
    initPrime();
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (sum(arr, 0, i) > 0 && sum(arr, i, n) > 0) {
            if (prime[sum(arr, 0, i)] && prime[sum(arr, i + 1, n)]) {
                cout << i << ' ';
            }
        }
    }

    return 0;
}
