#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    string result = (x % 2 == 0) ? "Chan" : "Le";
    cout << "So " << x << " la " << result << endl;

    return 0;
}
