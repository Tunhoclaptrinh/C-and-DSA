#include <iostream>
using namespace std;

void Print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int stt = 1;
    for (int i = n - 1; i > 0; i--) {
        bool swapped = false;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
        if (swapped) {
            cout << "Buoc " << stt << ": ";
            Print(arr, n);
            stt++;
        } else {
            break;
        }
    }


    return 0;
}
