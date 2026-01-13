#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<char> nhap() {
    vector<char> v;
    string s;

    // đọc cho tới EOF
    while (getline(cin, s)) {
        for (char c: s) {
            if (c != ' ') {
                v.push_back(c);
            }
        }
    }
    return v;
}

vector<char> thaydoi(vector<char> v) {
    for (char &c: v) {
        if (c >= 'a' && c <= 'z') {
            c -= 32;
        } else if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
    }
    return v;
}


void in(vector<char> v) {
    for (char c: v) {
        cout << c << ' ';
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);

    return 0;
}
