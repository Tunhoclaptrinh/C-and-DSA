#include <bits/stdc++.h>
using namespace std;

void vietHoa(string &s) {
  for (int i = 0; i < s.length(); i++) {
    s[i] = toupper(s[i]);
  }
}

void chuanHoa(string &s) {
  s[0] = toupper(s[0]);
  for (int i = 1; i < s.length(); i++) {
    s[i] = tolower(s[i]);
  }
}

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string s;
    getline(cin, s);

    stringstream ss(s);

    vector<string> fullName;

    string token;
    while (ss >> token) {
      fullName.push_back(token);
    }

    for (int i = 0; i < fullName.size(); i++) {
      if (i < fullName.size() - 1) {
        chuanHoa(fullName[i]);
      } else {
        vietHoa(fullName[i]);
      }
      cout << fullName[i] << ' ';
    }

    cout << endl;
  }

  return 0;
}