#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        int d;
        cin >> s >> d;

        // Bước 1: Đếm tần suất
        map<char, int> mp;
        for (int i = 0; i < (int)s.length(); i++) {
            mp[s[i]]++;
        }

        // Bước 2: Đưa vào vector và sắp xếp giảm dần theo số lần xuất hiện
        vector<pair<char, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        int n = s.length();
        vector<char> KQ(n, '#'); // mảng kết quả, ban đầu rỗng
        int k = vec.size();
        bool ok = true;

        // Bước 3: Tham lam đặt ký tự
        int i = 0;
        while (i < k) {
            char kyTu = vec[i].first;
            int p = vec[i].second;
            int pos = 0;

            // tìm vị trí trống đầu tiên
            while (pos < n && KQ[pos] != '#') pos++;

            for (int t = 0; t < p; t++) {
                if (pos >= n) {
                    ok = false;
                    break;
                }
                KQ[pos] = kyTu;
                pos += d; // nhảy d vị trí
                // bỏ qua vị trí đã được điền
                while (pos < n && KQ[pos] != '#') pos++;
            }

            if (!ok) break;
            i++;
        }

        // Bước 4: In kết quả hoặc thông báo
        if (!ok) {
            cout << "Khong co loi giai\n";
        } else {
            for (char c : KQ) cout << c;
            cout << "\n";
        }
    }

    return 0;
}
