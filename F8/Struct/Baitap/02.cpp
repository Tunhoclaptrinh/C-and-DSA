#include <iostream>
#include <string>

using namespace std;

const float PI = 3.14159265358979323846;

struct Product {
    string name;
    float price;
    int quantity;

    friend istream &operator>>(istream &is, Product &p) {
        cout << "Nhap product name: ";
        // is >> p.name;
        is.ignore();
        getline(is, p.name);

        cout << "Nhap product price: ";
        is >> p.price;

        cout << "Nhap product quantity: ";
        is >> p.quantity;

        return is;
    }

    friend ostream &operator<<(ostream &os, const Product &p) {
        os << "(" << "Name: " << p.name << ", " << "Price: " << p.price << ", " << "Quantity: " << p.quantity << ")";

        return os;
    }
};

int show_menu();

void printProduct(Product *products, int size);

void addProduct(Product *&products, int &size);

void removeProduct(Product *&products, int &size);

int main() {
    int size = 0;
    int isContinue = 1;
    Product *products = new Product[size];

    while (isContinue) {
        int choice = show_menu();

        // system("cls");
        switch (choice) {
            case 1:
                // xem danh sach
                printProduct(products, size);
                break;
            case 2:
                // Them san pham
                addProduct(products, size);
                break;
            case 3:
                // Xoa san pham
                removeProduct(products, size);
                break;
            case 0:
                cout << "Bye bye!" << endl;
                return 0;
            default:
                cout << "Lua chon khong hop le" << endl;
        }


        do {
            cout << "Ban co muon tiep tuc khong? (1/0)" << endl;

            cin >> isContinue;
        } while (isContinue != 0 && isContinue != 1);

        if (!isContinue) {
            cout << "Bye!" << endl;
            break;
        }
    }

    return 0;
}

int show_menu() {
    // system("cls");
    int chose;
    cout << "========= MENU ========" << endl;
    cout << "1. Xem danh sach san pham" << endl;
    cout << "2. Them san pham" << endl;
    cout << "3. Xoa san pham" << endl;
    cout << "0. Thoat chuong trinh" << endl;

    cout << "Lua chon cua ban la: " << endl;
    cin >> chose;

    return chose;
}

void printProduct(Product *products, int size) {
    if (size == 0) {
        cout << "Chua co san phan nao!" << endl;
    }

    cout << "Danh sach san pham" << endl;
    for (int i = 0; i < size; i++) {
        cout << products[i] << endl;
    }
}

void addProduct(Product *&products, int &size) {
    Product newProduct;
    cout << "Nhap new product: " << endl;
    cin >> newProduct;

    int newSize = size + 1;
    Product *newProducts = new Product[newSize];
    for (int i = 0; i < size; i++) {
        newProducts[i] = products[i];
    }
    newProducts[size] = newProduct;

    delete[] products; // giải phóng mảng cũ
    products = newProducts; // gán con trỏ sang mảng mới
    size = newSize;
    cout << "Them san pham thanh cong!" << endl;
}

void removeProduct(Product *&products, int &size) {
    int idx;
    cout << "Nhap index san pham muon xoa: ";
    cin >> idx;

    // xóa phần tử tại vị trí idx
    for (int i = idx; i < size - 1; i++) {
        products[i] = products[i + 1];
    }

    //Copy toàn bộ phần từ cũ sang mảng mới
    int newSize = size - 1;
    Product *newProducts = new Product[newSize];
    for (int i = 0; i < newSize; i++) {
        newProducts[i] = products[i];
    }

    delete[] products; // giải phóng mảng cũ
    products = newProducts; // gán con trỏ sang mảng mới
    size = newSize;
    cout << "Xoa san pham thanh cong!" << endl;
}
