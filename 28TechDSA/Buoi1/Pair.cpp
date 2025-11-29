#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int, int> p; // first , secound
    pair<int, long long> p1;
    pair<char, int> p2;
    // ...

    // Ex
    pair<int, int> p3 = make_pair(10, 20);
    cout << p3.first << '\n'; // 10
    cout << p3.second << '\n'; // 20

    // ex
    int n;
    cin >> n;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }

    // ex
    vector<int, pair<int, int> > v(n);
    pair<int, pair<int, int> > v1;
    v1.first = 10;
    v1.second.first = 20;
    v1.second.second = 30; // {10, {20, 30}}
    pair<int, vector<int> > v2;


    return 0;
}
