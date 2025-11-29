#include <iostream>

using namespace std;

void xinChao(string ten = "bạn") {
    cout << "Xin chào " << ten << "!" << endl;
}

int main() {
    xinChao();           // Không truyền → dùng "bạn"
    xinChao("An");       // Truyền → dùng "An" return 0;
}
