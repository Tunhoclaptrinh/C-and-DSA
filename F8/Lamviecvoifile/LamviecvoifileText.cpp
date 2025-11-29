#include <iostream>
#include <fstream>

using namespace std;

// Read/Write File

int main() {
    fstream fs;

    fs.open("test.txt");
    // Chú ý file này đã được để ra bên ngoài tại vì biên dịch ra bên ngoài rồi

    // nếu muốn chỉ định rõ trong folder thì lấy rõ đường dẫn ra, đây chỉ là ví dụ
    // fs.open("G:\\.study_material\\C Plus Plus (C++)\\Lamviecvoifile\\test.txt");

    // Ghi file (khi ghi thì sau đó không đọc được ngay bên dưới nên comment lại)
    // fs << "Hello World!\n";

    // Đọc file
    // string text;
    // getline(fs, text);
    // cout << text << endl;
    //
    // // fs << "Nguyen Tien Tuan\n";
    // string name;
    // getline(fs, name);
    // cout << name << endl;

    // Ghi đè
    fs << "aaaaa";


    // Đóng
    fs.close();

    if (fs.is_open()) {
        cout << "Mo file thanh cong!" << endl;
    } else {
        cout << "Mo file that bai!" << endl;
    }

    return 0;
}