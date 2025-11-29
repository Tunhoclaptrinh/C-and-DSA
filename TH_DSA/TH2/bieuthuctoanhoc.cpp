#include <bits/stdc++.h>
using namespace std;

bool nextPermutation(vector<int> &arr) {
    int n = arr.size();
    int i = n - 2;

    while (i >= 0 && arr[i] >= arr[i + 1]) i--;
    if (i < 0) return false;
    int j = n - 1;

    while (arr[j] <= arr[i]) j--;
    swap(arr[i], arr[j]);
    reverse(arr.begin() + i + 1, arr.end());

    return true;
}


int calc(int a, char op, int b) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    return a * b;
}

int main() {
    int t, target;
    cin >> t >> target;
    while (t--) {
        vector<int> arr(5);
        for (int i = 0; i < 5; i++) cin >> arr[i];

        bool isOk = false;

        for (int i = 0; i < arr.size(); i++) {
            int minIdx = i;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[minIdx] > arr[j]) {
                    minIdx = j;
                }
            }
            if (minIdx != i) {
                swap(arr[i], arr[minIdx]);
            }

        }
        char ops[3] = {'+', '-', '*'};

        do {
            for (char o1 : ops)
                for (char o2 : ops)
                    for (char o3 : ops)
                        for (char o4 : ops) {
                            int val = arr[0];
                            val = calc(val, o1, arr[1]);
                            val = calc(val, o2, arr[2]);
                            val = calc(val, o3, arr[3]);
                            val = calc(val, o4, arr[4]);
                            if (val == target) {
                                isOk = true;
                                break;
                            }
                        }
            if (isOk) break;
        } while (nextPermutation(arr));

        cout << (isOk ? "YES" : "NO") << endl;
    }
    return 0;
}

// 3 23
//
// 1 1 1 1 1
//
// 1 2 3 4 5
//
// 2 3 5 7 11
