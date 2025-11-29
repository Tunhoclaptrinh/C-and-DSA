#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    // Xóa khoảng trắng đầu chuỗi
    while (str[0] == ' ' ) {
        str.erase(0, 1);
    }

    // Xóa khoảng trắng cuối chuỗi
    while (str[str.length()-1] == ' ') {
        str.erase(str.length() - 1, 1);
    }

    // Xóa 2 khoảng trắng liên tiếp

    int i = 0;
    while( i < str.length() - 1) {
        if (str[i] == ' ' && str[i+1] == ' ') {
            str.erase(i, 1);
        } else {
            i++;
        }
    }

    // Chuyển các ký tự thành chữ thường
    for (int i = 0; i < str.length() ; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }

    // Chuyển ký tự đầu tiên của từ thành chữ hoa
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            str[i + 1] -= 32;
        } else if (i == 0 && str[i] != ' ') {
            str[i] -= 32;
        }
    }

    cout << "Ket qua: " << str << endl;

    return 0;
}
