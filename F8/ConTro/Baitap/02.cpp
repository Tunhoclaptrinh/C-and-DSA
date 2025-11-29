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

void remove(int * &arr, int &size, int idx) {
    //Tạo mảng mới
    int new_size = size - 1;
    int *tmp_arr = new int[new_size];

    //Xóa phần tử tại vị trí
    for (int i = idx; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    //Copy toàn bộ phần từ cũ sang mảng mới
    for (int i = 0; i < size; i++) {
        tmp_arr[i] = arr[i];
    }

    //Gán mảng mới sang con trỏ cũ và giảm size lên 1 đơn vị
    delete[] arr;
    arr = tmp_arr;
    size = new_size;
}

int main() {
    int n, x;

    input_interger("n = ", n);

    int *number = new int[n];
    cout << "Nhap mang: ";
    input_array(number, n);

    input_interger("x = ", x);
    remove(number, n, x);

    cout << "Mang sau khi xoa: ";
    print_array(number, n);

    return 0;
}
