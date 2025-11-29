#include <chrono> // Thư viện đo thời gian
using namespace std::chrono;


#include <iostream>
#include <math.h>
using namespace std;


int main() {
    auto start = high_resolution_clock::now(); // Bắt đầu đo


    int n;
    cout << "n = " << endl;
    cin >> n;

    if (n <= 2) {
        cout << n << " la so nguyen to" << endl;
        return 0;
    }

    for (int i = 2; i <= sqrt(n) + 1; i++) {
         if (n % i == 0) {
            cout << n <<" khong phai so nguyen to" << endl;
            return 0;
        }
    }

    cout << n << " la so nguyen to" << endl;




    // -----------------------------

    auto end = high_resolution_clock::now(); // Kết thúc đo
    auto duration = duration_cast<milliseconds>(end - start); // Tính thời gian chạy
    cout << "Thoi gian chay: " << duration.count() << " ms" << endl;

    return 0;
}
