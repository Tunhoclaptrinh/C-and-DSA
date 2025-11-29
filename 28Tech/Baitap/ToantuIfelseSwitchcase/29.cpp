#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int nam = n / 365;
    int tuan = (n - nam * 365)/ 7;
    int ngay = (n - nam * 365)% 7;
    cout << nam << endl;
    cout << tuan << endl;
    cout << ngay << endl;

}
