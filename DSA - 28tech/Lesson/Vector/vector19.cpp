#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAXN = 10001;
int prime[MAXN];

void init() {
    fill(prime, prime + MAXN, 1);

    prime[0] = prime[1] = 0;

    for (int i = 2; i * i < MAXN; i++) {
        if (prime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                prime[j] = 0;
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    init();

    int n;
    vector<int> v;
    vector<int> v2;

    while (cin >> n) {
        if (prime[n]) {
            v.push_back(n);
        } else {
            v2.push_back(n);
        }
    }

    reverse(v.begin(), v.end());
    for (int x: v) {
        cout << x << ' ';
    }


    for (int x: v2) {
        cout << x << ' ';
    }

    return 0;
}
