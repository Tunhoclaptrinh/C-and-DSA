#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 1e6;
bool prime[MAXN];


void initPrime() {
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i * i <= MAXN; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                prime[j] = false;
            }
        }
    }
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

    int cnt = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (prime[arr[i]] && arr[i] >= 2) {
            cnt++;
            sum += arr[i];
        }
    }

    cout << fixed << setprecision(3) << (double) sum / cnt << endl;

    return 0;
}
