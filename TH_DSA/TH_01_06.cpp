#include <bits/stdc++.h>
using namespace std;
int n;
int M[100], N[100], P[100],X[100][100];
int res;

void Try(int i, int sum);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int tc = 0;
    while (t--) {
        n = 8;
        res = 0;
        memset(M, 0, sizeof(M));
        memset(N, 0, sizeof(N));
        memset(P, 0, sizeof(P));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> X[i][j];
            }
        }

        Try(1, 0);
        cout << "Test " << tc++ << ": " << res << "\n";
    }

    return 0;
}

void Try(int i, int sum) {
    if (i == n + 1) {
        res = max(res, sum);
        return;
    }
    for (int j = 1; j <= n; j++) {
        if (M[j] == 0 && N[j + i] == 0 && P[i - j + n] == 0) {
            M[j] = N[j + i] = P[i - j + n] = 1;
            Try(i + 1, sum + X[i][j]);
            M[j] = N[j + i] = P[i - j + n] = 0;
        }
    }
}