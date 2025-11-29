#include <iostream>
#include <string>

using namespace std;

int main() {
    // string str = "Hello World!";
    // cout << str << endl;

    // câu này dùng để câu sau thực thi được
    int a;
    cin >> a;
    cin.ignore();

    string str;
    cout << "Nhap chuoi: " << endl;

    // cin >> str; // khong bao gom dau cach
    getline(cin, str);

    cout << str;

    cout << str[1] << endl;

    return 0;
}