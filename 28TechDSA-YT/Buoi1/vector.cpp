#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v; // {}
    v.push_back(3); // {3}
    v.push_back(1); // {3,1}
    v.push_back(2); // {3,1,2}
    v.push_back(0); // {3,1,2,0}
    v.push_back(5); // {3,1,2,0,5}

    vector<int>::iterator it = v.begin();
    cout << *it << '\n'; // 3

    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }

    return 0;

}
