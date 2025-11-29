#include <bits/stdc++.h>
using namespace std;

void genAB(int n, string current, vector<string>& result) {
    if (current.length() == n) {
        result.push_back(current);
        return;
    }

    genAB(n, current + 'A', result);

    genAB(n, current + 'B', result);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> result;
        genAB(n, "", result);

        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}