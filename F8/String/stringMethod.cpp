#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Khởi tạo chuỗi
    string s = "Hello";

    // 2. Độ dài chuỗi
    cout << "Length size: " << s.size() << endl;
    cout << "Length length: " << s.length() << endl;

    // 3. Truy cập ký tự
    cout << "First char: " << s[0] << endl;
    cout << "Second char (at): " << s.at(1) << endl;

    // 4. Nối chuỗi
    s.append(" World");
    s += "!";
    s.push_back('?');
    cout << "After append: " << s << endl;

    // 5. Chèn chuỗi
    s.insert(5, ",");
    cout << "After insert: " << s << endl;

    // 6. Xóa ký tự
    s.erase(5, 1);  // Xóa dấu ','
    s.pop_back();   // Xóa '?'
    cout << "After erase: " << s << endl;

    // 7. Thay thế chuỗi
    s.replace(6, 5, "Universe");
    cout << "After replace: " << s << endl;

    // 8. Cắt chuỗi con
    string sub = s.substr(6, 8);
    cout << "Substring: " << sub << endl;

    // 9. Tìm kiếm
    size_t pos = s.find("Universe");
    if (pos != string::npos) {
        cout << "'Universe' found at: " << pos << endl;
    }

    // 10. So sánh chuỗi
    string a = "abc", b = "abd";
    if (a.compare(b) < 0)
        cout << a << " < " << b << endl;
    else
        cout << a << " >= " << b << endl;

    // 11. Kiểm tra rỗng, xóa toàn bộ
    string emptyStr = "";
    cout << "Is empty? " << (emptyStr.empty() ? "Yes" : "No") << endl;
    s.clear();
    cout << "After clear: " << s << " (size = " << s.size() << ")" << endl;

    // 12. Hoán đổi chuỗi
    string s1 = "Apple", s2 = "Banana";
    s1.swap(s2);
    cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << endl;

    // 13. Lấy chuỗi kiểu C
    const char* c_str = s2.c_str();
    cout << "C-style string: " << c_str << endl;

    return 0;
}
