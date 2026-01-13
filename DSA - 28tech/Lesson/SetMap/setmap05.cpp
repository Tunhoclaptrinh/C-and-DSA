#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<char, int> mp;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        mp[c]++;
    }

    cout << (*mp.begin()).first << ' ' << (*mp.begin()).second << endl;
    cout << (*mp.rbegin()).first << ' ' << (*mp.rbegin()).second << endl;

    for (pair<char, int> p: mp) {
        cout << p.first << ' ' << p.second << endl;
    }

    for (map<char, int>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++) {
        cout << (*it).first << ' ' << (*it).second << endl;
    }

    return 0;
}
