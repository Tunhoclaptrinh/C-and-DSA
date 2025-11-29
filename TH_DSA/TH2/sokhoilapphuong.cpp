#include <bits/stdc++.h>
using namespace std;
string n;
long long ans = -1;

bool isCube(long long x) {
    long long c = round(cbrt((long double)x)); // căn bậc 3 và làm tròn
    return c * c * c == x;
}

void Try(int idx, string current) {
    if (idx == n.size()) {
        if (current.empty()) return;
        if (current[0] == '0') return;
        long long val = stoll(current);
        if (isCube(val))
            ans = max(ans, val);
        return;
    }

    // bỏ hoặc chọn chữ số n[idx]
    Try(idx + 1, current);
    Try(idx + 1, current + n[idx]);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        ans = -1;
        Try(0, "");
        cout << ans << endl;
    }
    return 0;
}