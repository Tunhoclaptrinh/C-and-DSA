#include <bits/stdc++.h>
using namespace std;


// try cap ky tu qua chi so
// length()
// size()
// cin, getline
// compare => -1, 0, 1
// substr
// stoi
// stoll
// to_string
// stringstream

int main() {
    string s = "Python";
    cin >> s; // vẫn còn phím enter
    cout << s << endl;
    cin.ignore();

    string s1;
    // CÁI NÀY CÓ THỂ ĐỌC ĐƯỢC CẢ DẤU CÁCH
    getline(cin, s1);
    cout << s1 << endl;

    cout << s1[1] << endl;
    cout << s1.length() << endl;
    cout << s1.size() << endl;

    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << endl;
    }

    for (char x: s1) {
        cout << x << endl;
    }

    // nối chuỗi
    string s2;
    s2 = s + s1;


    // so sanh theo thu tu tu dien
    if (s > s1) {
        cout << "s lon hon s1" << endl;
    } else if (s < s1) {
        cout << "s be hon s1" << endl;
    } else {
        cout << "s giong s1" << endl;
    }

    string a = "abcdefghijk";
    string b = a.substr(1, a.length());

    string c = "123";
    int d = stoi(c); // 123
    string e = "1231231232131231213213123";
    long long f = stoll(e);

    int n = 12343;
    string g = to_string(n);


    string iii = "python java     php   ssss";
    stringstream ss(iii);
    string tmp;
    while (ss >> tmp) {
        cout << tmp << endl;
    }

    string yyy = "python.java.php.ssss";
    stringstream ss1(yyy);
    string tmp1;

    while (getline(ss1, tmp1, '.')) {
        cout << tmp1 << endl;
    }


    return 0;
}
