#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream f("DATA.in");
  map<int, int> freq;

  int x = -1;
  while (f >> x) {
    if (x > 0 && x <= 100000) {
      freq[x]++;
    }
  }

  for (map<int, int>::iterator it = freq.begin(); it != freq.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
  f.close();

  return 0;
}