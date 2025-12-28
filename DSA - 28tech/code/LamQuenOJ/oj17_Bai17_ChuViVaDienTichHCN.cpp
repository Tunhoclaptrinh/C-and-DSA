#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int width, height;
    cin >> width >> height;


    cout << "Chu vi HCN la : " << (long long) (width + height) * 2 << endl;
    cout << "Dien tich HCN la : " << (long long) width * height << endl;

    return 0;
}
