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

void add(int * &arr, int &size, int idx, int val) {
    //Tạo mảng mới
    int new_size = size + 1;
    int *tmp_arr = new int[new_size];

    // Cách 1:
    //Copy toàn bộ phần từ cũ sang mảng mới và thêm phần tử tại vị trí
    // for (int i = 0; i < new_size; i++) {
    //     if (i < idx) {
    //         tmp_arr[i] = arr[i];
    //     } else if (i == idx) {
    //         tmp_arr[i] = val;
    //     } else {
    //         tmp_arr[i] = arr[i - 1];
    //     }
    // }

    // Cách 2:
    // Copy toàn bộ phần từ cũ sang mảng mới
    for (int i = 0; i < size; i++) {
        tmp_arr[i] = arr[i];
    }
    // thêm phần tử tại vị trí
    for (int i = new_size - 1; i > idx; i--) {
        tmp_arr[i] = arr[i - 1];
    }
    tmp_arr[idx] = val;

    //Gán mảng mới sang con trỏ cũ và giảm size lên 1 đơn vị
    delete[] arr;
    arr = tmp_arr;
    size = new_size;
}

int main() {
    int n, x, y;

    input_interger("n = ", n);

    int *number = new int[n];
    cout << "Nhap mang: ";
    input_array(number, n);

    input_interger("x = ", x);
    input_interger("y = ", y);

    add(number, n, x, y);

    cout << "Mang sau khi xoa: ";
    print_array(number, n);

    return 0;
}
