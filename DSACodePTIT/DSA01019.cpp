#include <bits/stdc++.h>
using namespace std;

int ok;

void init(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = 'H';
  }
}

void next(char arr[], int n) {
  int i = n - 1;
  while (i >= 0 && arr[i] == 'A') {
    arr[i] = 'H';
    i--;
  }

  if (i == -1) {
    ok = 0; // end
  } else {
    arr[i] = 'A';
  }
}

bool check(char arr[], int n) {
  if (arr[0] != 'H' || arr[n - 1] != 'A') {
    return false;
  }

  for (int i = 0; i < n - 1; i++) {
    if (arr[i] == 'H' && arr[i + 1] == 'H')
      return false;
  }

  return true;
}

void printHAHA(char arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
  }
  cout << endl;
}

void printHAHA(string s) { cout << s << endl; }

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    ok = 1;
    cin >> n;
    char arr[n];

    init(arr, n);

    set<string> se;

    while (ok) {
      if (check(arr, n)) {
        string tmp = "";
        for (int i = 0; i < n; i++) {
          tmp += arr[i];
        }
        se.insert(tmp);
      }

      next(arr, n);
    }

    for (auto it : se) {
      printHAHA(it);
    }
  }

  return 0;
}