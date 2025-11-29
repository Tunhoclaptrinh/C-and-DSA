#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin, str);

    // Xóa khoảng trắng đầu chuỗi
    while (str[0] == ' ' ) {
        str.erase(0, 1);
    }

    // Xóa khoảng trắng cuối chuỗi
    while (str[str.length()-1] == ' ') {
        str.erase(str.length() - 1, 1);
    }

    cout << "Ket qua: " << str << endl;

    return 0;
}


     //"      tuan nguyen     "