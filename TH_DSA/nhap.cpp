#include <bits/stdc++.h>
using namespace std;

void generateAB(int n, string current, vector<string>& result) {
    // Nếu đã đủ độ dài n
    if (current.length() == n) {
        result.push_back(current);
        return;
    }

    // Thử thêm 'A'
    generateAB(n, current + 'A', result);

    // Thử thêm 'B'
    generateAB(n, current + 'B', result);
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
        generateAB(n, "", result);
        
        for (int i = 0; i < result.size(); i++) {
            cout << result[i];
            if (i < result.size() - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}