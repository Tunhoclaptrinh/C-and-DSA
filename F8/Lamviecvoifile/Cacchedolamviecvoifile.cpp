#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Ghi file (xóa cũ)
    ofstream out("test.txt", ios::out | ios::trunc);
    out << "Dong 1\n";
    out << "Dong 2\n";
    out.close();

    // Ghi thêm vào cuối file
    ofstream out2("test.txt", ios::app);
    out2 << "Dong 3 (them vao)\n";
    out2.close();

    // Đọc file
    ifstream in("test.txt", ios::in);
    string line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close();

    return 0;
}