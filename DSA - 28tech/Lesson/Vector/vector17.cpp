#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<char> convert_number(long long n) {
    vector<char> s;
    while (n) {
        if (n % 2 == 0) {
            s.push_back('0');
        } else {
            s.push_back('1');
        }
        n /= 2;
    }
    while (s.size() < 64) {
        s.push_back('0');
    }

    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for (char x: bin) {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
