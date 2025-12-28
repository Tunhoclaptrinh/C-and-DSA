#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int sumDigit(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool check(ll n) {
    if (sumDigit(n) %10 == 8) {
        return 1;
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    if (check(n)) {
        cout << "28tech" << endl;
    } else {
        cout << "0" << endl;
    }


    return 0;
}
