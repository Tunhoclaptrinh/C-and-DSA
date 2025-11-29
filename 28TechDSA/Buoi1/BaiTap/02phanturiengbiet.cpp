#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    cout << s.size() << endl;
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}
