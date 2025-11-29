#include <iostream>
#include <string>
using namespace std;


int main() {
    // Khai báo biến
    string name; // lưu tên
    int age; // lưu tuổi

    //Nhập dữ liệu
    cout << "Enter name: "; // in ra yêu cầu nhập dữ liệu
    cin >> name; // Gán dữ liệu cho biến
    cout << "Enter age: ";
    cin >> age;

    cout << "Xin chao " << name << ", ban " << age << " tuoi." << endl;
}
