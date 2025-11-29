#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //==================multiset=====================
    // ve co ban la giong set. chi khac la co the luu trung phan tu (phan tu giong nhau)
    // mutiset.find() => tra ve iterator dau tien
    // mutiset.count() => tra ve >=0
    // mutiset.erase() => xoa tat ca cac gia tri duoc truyen vao

    // khong luu duoc 2 phan tu giong nhau
    // sap xep theo thu tu tang dan
    // insert => them phan tu vao set
    // nhiều cái tương tự vector

    multiset<int> s; // {}
    s.insert(1); // {1}
    s.insert(2); // {1,2}
    s.insert(3); // {1,2,3}
    s.insert(1); // {1,2,3}
    s.insert(2); // {1,2,3}
    s.insert(0); // {0,1,2,3}
    s.insert(3); // {0,1,2,3}
    s.insert(4); // {0,1,2,3,4}

    cout << s.size() << '\n';

    for (int x: s) {
        cout << x << ' ';
    } // 0 1 2 3 4

    cout << '\n';
    for (auto it = s.begin(); it != s.end(); it++) {
        // dùng Iterator
        cout << *it << ' ';
    } // 0 1 2 3 4

    // duyet nguoc
    for (auto it = s.rbegin(); it != s.rend(); it++) {
        // duyet nguoc van là it ++ => chay theo chieu nguoc do it cung nguoc
        // dùng Iterator
        cout << *it << ' ';
    } // 0 1 2 3 4

    auto it = s.begin(); // 0
    it++; // chi ho tro ++ -- thoi
    cout << *it << ' ';
    // không ho tro viec it + = 2 hoac n

    s.count(1); // dem so phan tu 1 xuat hien => 0 || 1
    s.find(1); // tra ve iterator, nếu khong tim duoc tra ve s.end()

    s.erase(1); // xoa ma khong ton tai trong set thi loi nha

    auto it1 = s.find(2);
    s.erase(it1);

    cout << distance(s.begin(), it1) << '\n'; // khoang cach it

    return 0;
}
