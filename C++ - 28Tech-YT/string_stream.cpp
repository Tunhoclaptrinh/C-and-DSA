#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s = " ngon ngu    lap trinh java";
  stringstream ss(s);
  string tmp;
  vector<string> v;
  while (ss >> tmp) {
    v.push_back(tmp);
  }

  for (string x : v) {
    cout << x << endl;
  }

  return 0;
}