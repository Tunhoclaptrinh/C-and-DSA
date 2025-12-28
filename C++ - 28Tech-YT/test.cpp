#include <bits/stdc++.h>
using namespace std;

// Hàm tính tổng chữ số trong chuỗi
int checkSumString(const string &s) {
    int sum = 0;
    for (char c : s) sum += c - '0';
    return sum;
}

// Hàm tăng chuỗi như số nguyên
bool nextString(string &s) {
    int i = s.size() - 1;
    while (i >= 0) {
        if (s[i] < '9') {
            s[i]++;
            for (int j = i + 1; j < s.size(); ++j) s[j] = '0';
            return true;
        }
        i--;
    }
    return false; // Đã đến số cuối cùng rồi (999...9)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, targetSum;
    cin >> m >> targetSum;

    // Không tồn tại
    if ((targetSum == 0 && m > 1) || targetSum > 9 * m) {
        cout << "-1 -1\n";
        return 0;
    }

    string current = "1" + string(m - 1, '0'); // Bắt đầu từ số nhỏ nhất có m chữ số
    string end = string(m, '9');               // Số lớn nhất có m chữ số

    string minResult = "", maxResult = "";

    while (true) {
        if (checkSumString(current) == targetSum) {
            if (minResult.empty()) minResult = current;
            maxResult = current;
        }

        if (current == end) break;
        nextString(current);
    }

    if (minResult.empty()) {
        cout << "-1 -1\n";
    } else {
        cout << minResult << ' ' << maxResult << '\n';
    }

    return 0;
}
