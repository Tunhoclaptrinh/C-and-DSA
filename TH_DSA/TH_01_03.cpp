#include <bits/stdc++.h>
using namespace std;


bool next(string &s, int k) {
    int i = k - 1;
    while (i >= 0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }

    if (i < 0) {
        return false;
    }

    s[i] = '1';
    return true;
}

// Hàm tạo xâu thuận nghịch từ nửa xâu
string makePalindrome(string half, int n) {
    string result = half;

    // Nếu n lẻ, bỏ phần tử cuối khi ghép ngược
    // Nếu n chẵn, ghép ngược toàn bộ
    int start = (n % 2 == 1) ? half.length() - 2 : half.length() - 1;

    for (int i = start; i >= 0; i--) {
        result += half[i];
    }

    return result;
}

void printStr(string s) {
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
        if (i < s.length() - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

// Hàm sinh tất cả xâu thuận nghịch
void genStr(int n, string current) {
    int k = (n + 1) / 2;

    string half = "";
    for (int i = 0; i < k; i++) {
        half += "0";
    }

    string palindrome = makePalindrome(half, n);
    printStr(palindrome);

    while (next(half, k)) {
        palindrome = makePalindrome(half, n);
        printStr(palindrome);
    }
}

string init(int n) {
    string s = "";
    for (int i = 0; i < n; i++) {
        s += "0";
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        genStr(n, "");

        cout << endl;
    }

    return 0;
}