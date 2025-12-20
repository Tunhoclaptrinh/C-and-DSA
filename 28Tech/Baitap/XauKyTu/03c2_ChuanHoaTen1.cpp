#include <bits/stdc++.h>
using namespace std;

void printHo(string ho) {
  cout << (char)toupper(ho[0]);
  for (int j = 1; j < ho.size(); j++) {
    cout << (char)tolower(ho[j]);
  }
  cout << ' ';
}

void printTen(string ten) {
  for (int i = 0; i < ten.size(); i++) {
    cout << (char)toupper(ten[i]);
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

    for (int i = 0; i < fullName.size() - 1; i++) {
      printHo(fullName[i]);
    }

    printTen(fullName.back());

    cout << endl;
  }

  return 0;
}