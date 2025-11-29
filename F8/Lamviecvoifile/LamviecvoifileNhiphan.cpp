#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Product {
    char name[50];
    float price;
    int quantity;
};

int main() {
    Product p1 = {"Apple", 10.5, 100};

    // Ghi file nhị phân
    ofstream out("products.bin", ios::binary);
    out.write((char*)&p1, sizeof(p1));
    out.close();

    // Đọc lại file
    Product p2;
    ifstream in("products.bin", ios::binary);
    in.read((char*)&p2, sizeof(p2));
    in.close();

    cout << "Name: " << p2.name 
         << ", Price: " << p2.price 
         << ", Quantity: " << p2.quantity << endl;

    return 0;
}