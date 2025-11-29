#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<char> v;
        bool ok = true; // kiểm tra chuỗi có hợp lệ không

        for (int i = 0; i < (int)s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                v.push_back(s[i]);
            }
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if (v.empty()) {
                    ok = false;
                    break;
                }
                else {
                    char top = v.back();
                    v.pop_back();
                    if ((s[i] == ')' && top != '(') ||
                        (s[i] == ']' && top != '[') ||
                        (s[i] == '}' && top != '{')) {
                        ok = false;
                        break;
                        }
                }
            }
        }

        if (ok && v.empty()) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
