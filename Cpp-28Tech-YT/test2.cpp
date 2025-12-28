#include <bits/stdc++.h>
using namespace std;


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string plusBigInt(string x, string y) {
    string result = "";
    int nhoMOT = 0;

    // đảm bảo x luôn là chuỗi dài hơn
    if (x.length() < y.length()) swap(x, y);

    // cộng từ cuối lên
    for (int i = 1; i <= (int) y.length(); i++) {
        int s = (x[x.length() - i] - '0') + (y[y.length() - i] - '0') + nhoMOT;

        result += char((s % 10) + '0');
        nhoMOT = s / 10;
    }

    // cộng phần còn lại của x
    for (int i = (int) x.length() - (int) y.length() - 1; i >= 0; i--) {
        int s = (x[i] - '0') + nhoMOT;
        result += char((s % 10) + '0');
        nhoMOT = s / 10;
    }

    // nếu còn nhớ
    if (nhoMOT) result += '1';

    // kết quả đang ngược
    reverse(result.begin(), result.end());
    return result;
}

string substractBigInt(string x, string y) {
    string result = "";
    int borrow = 0;

    // Đảm bảo x dài hơn hoặc bằng y
    if (x.length() < y.length()) swap(x, y);
    else if (x.length() == y.length() && x < y) swap(x, y);

    // Cộng phần chung độ dài
    for (int i = 1; i <= (int) y.length(); i++) {
        int xi = x[x.length() - i] - '0';
        int yi = y[y.length() - i] - '0';

        int s = xi - yi - borrow;
        if (s < 0) {
            s += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result += char(s + '0');
    }

    // Trừ phần còn lại của x
    for (int i = (int) x.length() - (int) y.length() - 1; i >= 0; i--) {
        int xi = x[i] - '0';
        int s = xi - borrow;

        if (s < 0) {
            s += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result += char(s + '0');
    }

    // Xóa số 0 thừa
    while (result.size() > 1 && result.back() == '0') {
        result.pop_back();
    }

    reverse(result.begin(), result.end());
    return result;
}

string multiplyBigInt(string x, string y) {
    string result = x;

    while (y != "0") {
        result = plusBigInt(result, x);

        // trừ y đi 1
        y = substractBigInt(y, "1");
    }


    return result;
}

string devideBigInt(string x, string y) {
    string result = x;

    while (y != "0") {
        result = plusBigInt(result, x);

        // trừ y đi 1
        y = substractBigInt(y, "1");
    }


    return result;
}

int main() {
    // string x = "1233339123333912333391233339123333912333391233339123333912333391233339";
    // string y = "1234";

    string x, y;
    cin >> x >> y;

    cout << plusBigInt(x, y) << endl;
    cout << substractBigInt(x, y) << endl;

    cout << multiplyBigInt(x, "10") << endl;
    return 0;
}
