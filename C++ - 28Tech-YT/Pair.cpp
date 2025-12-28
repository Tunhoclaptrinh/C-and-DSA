#include <bits/stdc++.h>
using namespace std;

// pair<<data_type>,<data_type>> ten_bien;
// .firt  || . secound;
// make_pair (a,b); || {a, b}
// tuple , make_tuple, {}

int main() {
  pair<int, int> p1;
  pair<long long, int> p2;
  pair<string, int> p3;
  pair<string, string> p4;
  // ...

  pair<int, int> pair = make_pair(100, 200); // Hoặc {100, 200}
  cout << pair.first << endl;                // 100
  cout << pair.second << endl;               // 200

  tuple<int, int, int> tuple =
      make_tuple(300, 1, 2); // có thể nhiều hơn, vd: {1, 2, 3, 4 ..>
  cout << get<0>(tuple) << endl;

  return 0;
}
