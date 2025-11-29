#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int cnt[1000002];

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < a; i++) {
            int x;
            cin >> x;
            if (x > 0) cnt[x] = 1;
        }

        for (int i = 0; i < 1000001; i++) {
            if (!cnt[i]) {
                cout << i << " ";
            }
        }
    }

    return 0;
}
