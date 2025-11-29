#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin, str);

    // // Cách 1:
    // for (int i = 0; i < str.length() - 1;) {
    //     if (str[i] == ' ' && str[i+1] == ' ') {
    //         str.erase(i, 1);
    //     } else {
    //         i++;
    //     }
    // }

    // Cách 2:
    int i = 0;
    while( i < str.length() - 1) {
        if (str[i] == ' ' && str[i+1] == ' ') {
            str.erase(i, 1);
        } else {
            i++;
        }
    }


    str.erase(0, 1);
    str.erase(str.length()-1, 1);

    cout << "Ket qua: " << str << endl;

    return 0;
}
