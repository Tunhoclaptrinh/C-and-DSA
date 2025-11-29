#include <iostream>
using namespace std;

int main() {
    int n, result;
    cin >> n;
    result  = 0;

    for (int i = 0; i < n; i+= 5) {
        result += 5;
        cout << result  << " ";
    }

    return 0;
}
