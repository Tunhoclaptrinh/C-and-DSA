#include <iostream>
#include <string>

using namespace std;

void input_interger(string label, int &n) {
    cout << label;
    cin >> n;
}

void input_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void push(int* &arr, int &size, int new_element) {
    //Tạo mảng mới
    int new_size = size + 1;
    int *tmp_arr = new int[new_size];

    //Copy toàn bộ phần từ cũ sang mảng mới
    for (int i = 0; i < size; i++) {
        tmp_arr[i] = arr[i];
    }

    //Thêm phần tử mới vào cuối mảng mới
    tmp_arr[new_size - 1] = new_element;

    //Gán mảng mới sang con trỏ cũ và tăng size lên 1 đơn vị
    delete[] arr;
    arr = tmp_arr;
    size = new_size;
}

int main() {
    int n, x;

    input_interger("n = ", n);

    int *number = new int[n];
    cout << "Nhap mang: " ;
    input_array(number, n);

    input_interger("x = ", x);
    push(number, n, x);

    cout << "Mang sau khi them: ";
    print_array(number, n);

    return 0;
}
