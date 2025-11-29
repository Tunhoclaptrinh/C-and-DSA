#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000000000007LL; // 10^15 + 7

long long mulMod(long long a, long long b) {
    a %= MOD;
    b %= MOD;
    long long res = 0;

    while (b > 0) {
        if (b & 1) {
            res = (res + a) % MOD;
        }
        a = (a * 2) % MOD;
        b >>= 1;
    }

    return res;
}

struct Matrix {
    long long a[4][4];

    Matrix() {
        memset(a, 0, sizeof(a));
    }

    Matrix operator * (const Matrix &other) const {
        Matrix res;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                for (int k = 0; k < 4; k++) {
                    res.a[i][j] = (res.a[i][j] + mulMod(a[i][k], other.a[k][j])) % MOD;
                }
            }
        }
        return res;
    }
};

Matrix matPow(Matrix base, long long n) {
    Matrix res;
    for (int i = 0; i < 4; i++) {
        res.a[i][i] = 1;
    }

    while (n > 0) {
        if (n & 1) {
            res = res * base;
        }
        base = base * base;
        n >>= 1;
    }

    return res;
}

long long solve(long long n) {
    if (n == 1) return 1;
    if (n == 2) return 3;
    if (n == 3) return 6;

    Matrix M;

    M.a[0][0] = 1; M.a[0][1] = 1; M.a[0][2] = 0; M.a[0][3] = 0;
    M.a[1][0] = 0; M.a[1][1] = 1; M.a[1][2] = 1; M.a[1][3] = 1;
    M.a[2][0] = 0; M.a[2][1] = 1; M.a[2][2] = 0; M.a[2][3] = 0;
    M.a[3][0] = 0; M.a[3][1] = 0; M.a[3][2] = 1; M.a[3][3] = 0;

    Matrix result = matPow(M, n - 2);

    long long ans = 0;
    ans = (ans + mulMod(result.a[0][0], 3)) % MOD;
    ans = (ans + mulMod(result.a[0][1], 2)) % MOD;
    ans = (ans + mulMod(result.a[0][2], 1)) % MOD;

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << "\n";
    }

    return 0;
}