#include <bits/stdc++.h>
using namespace std;

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
      chuanHoa(fullName[i]);
    }

    cout << fullName.back() << ", ";
    for (int i = 0; i < fullName.size() - 1; i++) {
      cout << fullName[i] << ' ';
      // tùy theo test case có chấp nhận dấu  cách hay không
    }

    cout << endl;
  }

  return 0;
}